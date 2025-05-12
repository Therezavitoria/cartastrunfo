# Super Trunfo - Comparação de Cartas (Versão Básica)

Este programa em C simula uma versão simples do jogo Super Trunfo, comparando duas cartas de cidades brasileiras com base em atributos como população, área, PIB, etc. O código recebe os dados de duas cartas, calcula indicadores como **densidade populacional** e **PIB per capita**, e realiza uma **comparação utilizando o PIB** como critério.

---

## 🧾 Funcionalidades

- Cadastro manual de duas cartas.
- Cálculo automático de:
  - Densidade populacional (população / área).
  - PIB per capita (PIB / população).
- Comparação direta entre as duas cartas com base no PIB.
- Exibição do resultado da carta vencedora ou empate.

---

## 🧠 Atributos da Carta

Cada carta contém os seguintes campos:

- `estado`: nome do estado da cidade.
- `codigo`: código identificador da carta.
- `cidade`: nome da cidade.
- `populacao`: população total da cidade.
- `area`: área territorial da cidade (em km²).
- `pib`: produto interno bruto da cidade (em reais).
- `pontos_turisticos`: número de pontos turísticos.
- `densidade_populacional`: **calculado automaticamente**.
- `pib_per_capita`: **calculado automaticamente**.

---

## 🔢 Lógica de Comparação

Neste programa, a comparação entre as cartas é feita apenas com o **PIB**. A regra de decisão é:

- Se o PIB da **Carta 1** for maior → Carta 1 vence.
- Se o PIB da **Carta 2** for maior → Carta 2 vence.
- Se os PIBs forem iguais → **Empate**.

---



