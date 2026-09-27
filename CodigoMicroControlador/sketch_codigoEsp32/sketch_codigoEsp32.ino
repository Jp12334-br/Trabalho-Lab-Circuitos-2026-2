#include "HX711.h"
#include <ArduinoJson.h>

// ==========================
// PINOS
// ==========================
const byte HX_DT  = 3;
const byte HX_SCK = 2;


// ==========================
// OBJETO HX711
// ==========================
HX711 sinal;

// Fator de calibração (ajustar depois)
float fatorCalibracao = 1000.0;
typedef struct{
   int32_t leituraHX711;

}Dados;
Dados dados;
void setup() {

  Serial.begin(9600);


  // Inicializa o HX711
  sinal.begin(HX_DT, HX_SCK);
  sinal.set_scale(fatorCalibracao);
  sinal.tare();

  Serial.println("Sistema iniciado.");
  dados.leituraHX711 = 0;
}

void loop() {

  // Verifica comunicação com o HX711
  if (!sinal.is_ready()) {

    Serial.println("ERRO: HX711 nao encontrado!");
    delay(500);
    return;
  }

  // Média de 30 leituras do modulo Hx711
  dados.leituraHX711 = sinal.get_units(30);



  //Serialização Json 

  StaticJsonDocument<128> dadosTx;
  dadosTx["Sinal"]=dados.leituraHX711





}  



  