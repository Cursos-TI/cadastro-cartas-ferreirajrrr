#include <stdio.h>

int main(){
    // Variáveis para a Carta 1
    char estado1;
    char codigoCarta1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para a Carta 2
    char estado2;
    char codigoCarta2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Leitura dos dados da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a inicial do estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c consome o \n da entrada anterior
    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // O espaço consome o \n anterior e %[^\n] lê a linha toda
    printf("Digite a populacao:\n");
    scanf("%lu", &populacao1); // %lu para unsigned long int
    printf("Digite a area (em km2):\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);
 
    // Calcula os valores derivados APÓS ler os dados
    if (area1 > 0) densidadePopulacional1 = (float)populacao1 / area1; else densidadePopulacional1 = 0;
    if (populacao1 > 0) pibPerCapita1 = pib1 / (float)populacao1; else pibPerCapita1 = 0;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
 
    // --- Leitura dos dados da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a inicial do estado (A-H): ");
    scanf(" %c", &estado2); // O espaço antes de %c é crucial aqui
    printf("Digite o codigo da carta (ex: B02):\n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); // O espaço consome o \n anterior e %[^\n] lê a linha toda
    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    printf("Digite a area (em km2):\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);
 
    // Calcula os valores derivados APÓS ler os dados
    if (area2 > 0) densidadePopulacional2 = (float)populacao2 / area2; else densidadePopulacional2 = 0;
    if (populacao2 > 0) pibPerCapita2 = pib2 / (float)populacao2; else pibPerCapita2 = 0;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);
 
    // --- Exibição dos dados das cartas ---
    printf("\n\n--- Dados Cadastrados ---\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1); // %lu para unsigned long int
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
 
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2); // %lu para unsigned long int
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
 
    // --- Comparação das Cartas ---
    printf("\n\n--- Comparacao de Cartas ---\n");
    printf("Resultado (1 para verdadeiro, 0 para falso):\n");
    printf("Populacao: Carta 1 > Carta 2? %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 > Carta 2? %d\n", area1 > area2);
    printf("PIB: Carta 1 > Carta 2? %d\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 > Carta 2? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 < Carta 2? %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 > Carta 2? %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 > Carta 2? %d\n", superPoder1 > superPoder2);
 
    
    return 0;
}