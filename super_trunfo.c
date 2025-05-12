#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Instruções para o usuário e coleta dos dados para a primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a População: ");
    scanf("%lu", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coleta dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%lu", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da densidade populacional e PIB per capita para a primeira carta
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9 / populacao1;  // Convertendo PIB para reais

    // Cálculos da densidade populacional e PIB per capita para a segunda carta
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9 / populacao2;  // Convertendo PIB para reais

    // Cálculo do Super Poder para a primeira carta
    float superPoder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontosTuristicos1 + (1 / densidadePopulacional1) + pibPerCapita1;

    // Cálculo do Super Poder para a segunda carta
    float superPoder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontosTuristicos2 + (1 / densidadePopulacional2) + pibPerCapita2;

    // Comparações dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Comparando Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
