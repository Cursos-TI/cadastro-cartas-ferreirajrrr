#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  int main(){
    char estado;
    char codigoCarta[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    scanf("Digite o estado: %s", &estado);
    scanf("Agora digite o codigo da carta: %s", &codigoCarta);
    scanf("Digite a cidade: %s", &cidade);
    scanf("Digite a populacao: %d", &populacao);
    scanf("Digite a area: %f", &area);
    scanf("Digite o PIB: %f", &pib);
    scanf("Digite a quantidade de pontos turisticos: %d", &pontosTuristicos);

    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
