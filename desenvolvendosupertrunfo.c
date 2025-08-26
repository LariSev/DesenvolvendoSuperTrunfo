// Programa: Desenvolvendo Super Trunfo de cidades (Nível Novato)
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

    // --- 1. Entrada dos dados da carta 1 ---
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

    // --- 2. Entrada dos dados da carta 2 ---
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

    // --- 3. Cálculos de densidade e PIB per capita ---
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000.0) / populacao1;
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
    
    // Este cálculo de Super Poder não é usado neste desafio, mas mantido para referência
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0/densidade1);
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0/densidade2);


    // --- 4. Exibição dos dados das cartas (Para conferência) ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);


    // --- 5. Comparação e exibição do resultado ---
    printf("\n--- Comparacao de Cartas ---\n");
    
    // Comparação do atributo escolhido: População (maior valor vence)
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomecidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
