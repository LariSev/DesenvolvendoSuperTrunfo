// Programa: Desenvolvendo Super Trunfo de cidades (Nível Aventureiro)
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
    int escolha; // Variável para a escolha do menu

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
    
    // O cálculo de Super Poder não é usado neste desafio, mas mantido para referência
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0/densidade1);
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0/densidade2);


    // --- 4. Menu Interativo e Comparação com if/else ---
    printf("\n--- Escolha o Atributo para Comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &escolha);

    printf("\n--- Resultado da Comparacao ---\n");

    if (escolha == 1) {
        // Comparação de População (maior valor vence)
        printf("Atributo: Populacao\n");
        printf("Carta 1 (%s): %lu\n", nomecidade1, populacao1);
        printf("Carta 2 (%s): %lu\n", nomecidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (escolha == 2) {
        // Comparação de Area (maior valor vence)
        printf("Atributo: Area\n");
        printf("Carta 1 (%s): %f km²\n", nomecidade1, area1);
        printf("Carta 2 (%s): %f km²\n", nomecidade2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (escolha == 3) {
        // Comparação de PIB (maior valor vence)
        printf("Atributo: PIB\n");
        printf("Carta 1 (%s): %f bilhoes de reais\n", nomecidade1, pib1);
        printf("Carta 2 (%s): %f bilhoes de reais\n", nomecidade2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (escolha == 4) {
        // Comparação de Pontos Turísticos (maior valor vence)
        printf("Atributo: Pontos Turisticos\n");
        printf("Carta 1 (%s): %d\n", nomecidade1, pontosturisticos1);
        printf("Carta 2 (%s): %d\n", nomecidade2, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        } else if (pontosturisticos2 > pontosturisticos1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (escolha == 5) {
        // Comparação de Densidade Populacional (menor valor vence)
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 (%s): %f hab/km²\n", nomecidade1, densidade1);
        printf("Carta 2 (%s): %f hab/km²\n", nomecidade2, densidade2);
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else if (escolha == 6) {
        // Comparação de PIB per Capita (maior valor vence)
        printf("Atributo: PIB per Capita\n");
        printf("Carta 1 (%s): %f bilhoes/pessoa\n", nomecidade1, pibpercapita1);
        printf("Carta 2 (%s): %f bilhoes/pessoa\n", nomecidade2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
        } else if (pibpercapita2 > pibpercapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        // Opção inválida
        printf("Opcao invalida. Por favor, escolha um numero entre 1 e 6.\n");
    }

    return 0;
}
