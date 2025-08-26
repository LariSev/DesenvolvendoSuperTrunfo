// Programa: Cadastro de cartas Super Trunfo de cidades (Nível Mestre)
// Aluna: Larissa Severo de Faria

#include <stdio.h>

int main() {
    // Variáveis
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, pib1, area2, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    char estado1[3], estado2[3];
    char codigocarta1[5], codigocarta2[5];
    char nomecidade1[50], nomecidade2[50];

    // Entrada dos dados da carta 1
    printf("Carta 1:\n");
    printf("Digite o estado (letra de A a H): \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigocarta1);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade1);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhoes de reais): \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    // Entrada dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Digite o estado (letra de A a H): \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta (ex: B02): \n");
    scanf("%s", codigocarta2);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / populacao1; // em bilhoes / pessoa
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Super Poder
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1/densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/densidade2);

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhoes/pessoa\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhoes/pessoa\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}
