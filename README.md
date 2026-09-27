# 🌿 Plant IoT

Sistema inteligente de monitoramento de plantas desenvolvido na disciplina de **Laboratório de Circuitos I (2026/2)**.

O projeto integra um **ESP32** com um **aplicativo Android (Kotlin + Ktor)**, responsável por receber, processar e visualizar os dados coletados do vaso em tempo real.

## 📖 Sobre o projeto

O sistema monitora continuamente as condições da planta por meio de sensores embarcados, permitindo acompanhar o peso do vaso, a umidade do solo, a temperatura e a umidade do ambiente. Essas informações são transmitidas em **JSON** para o aplicativo, onde são utilizadas para estimar o **consumo de água** e a **evapotranspiração**, auxiliando na tomada de decisão sobre a irrigação.

## 🎯 Objetivos

- Monitorar variáveis físicas e ambientais da planta;
- Integrar sistemas embarcados com uma aplicação mobile;
- Transmitir dados utilizando JSON;
- Estimar o consumo hídrico por evapotranspiração;
- Aplicar conceitos de Internet das Coisas (IoT).

## 📊 Variáveis monitoradas

| Variável | Finalidade |
|----------|------------|
| ⚖️ Peso do vaso | Determinar a variação da quantidade de água |
| 💧 Umidade do solo | Identificar a necessidade de irrigação |
| 🌡️ Temperatura ambiente | Auxiliar no cálculo da evapotranspiração |
| 🍃 Umidade do ar | Estimar o consumo hídrico da planta |

## 💻 Tecnologias

**Hardware**
- ESP32
- Célula de carga + HX711
- Sensor de umidade do solo
- Sensor de temperatura e umidade

**Software**
- Arduino IDE (C++)
- Kotlin
- Ktor
- Android Studio
- JSON

## 👨‍💻 Autor

**João Pedro Oliveira de Sousa**  
Projeto acadêmico — Laboratório de Circuitos I (2026/2)
