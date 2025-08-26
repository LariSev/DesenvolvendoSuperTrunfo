// Programa: Desenvolvendo Super Trunfo de cidades (Nível Mestre)
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
    int escolha1, escolha2; // Variáveis para as escolhas do menu
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;
    char atributo1[50], atributo2[50];


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

    // --- 4. Primeiro Menu Interativo ---
    printf("\n--- Escolha o PRIMEIRO Atributo para Comparacao ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &escolha1);

    // Lógica para obter os valores e o nome do primeiro atributo
    switch (escolha1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            sprintf(atributo1, "Populacao");
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            sprintf(atributo1, "Area");
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            sprintf(atributo1, "PIB");
            break;
        case 4:
            valor1_carta1 = pontosturisticos1;
            valor1_carta2 = pontosturisticos2;
            sprintf(atributo1, "Pontos Turisticos");
            break;
        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            sprintf(atributo1, "Densidade Populacional");
            break;
        case 6:
            valor1_carta1 = pibpercapita1;
            valor1_carta2 = pibpercapita2;
            sprintf(atributo1, "PIB per Capita");
            break;
        default:
            printf("Opcao invalida. Reinicie o programa.\n");
            return 1;
    }
    
    // --- 5. Segundo Menu Interativo (dinâmico) ---
    printf("\n--- Escolha o SEGUNDO Atributo para Comparacao ---\n");
    if (escolha1 != 1) printf("1. Populacao\n");
    if (escolha1 != 2) printf("2. Area\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos Turisticos\n");
    if (escolha1 != 5) printf("5. Densidade Populacional\n");
    if (escolha1 != 6) printf("6. PIB per Capita\n");
    printf("Digite sua escolha (1-6, diferente da primeira): ");
    scanf("%d", &escolha2);

    // Verifica se a segunda escolha é válida e diferente da primeira
    if (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 6) {
        printf("Opcao invalida. O atributo nao pode ser o mesmo ou fora do intervalo. Reinicie o programa.\n");
        return 1;
    }

    // Lógica para obter os valores e o nome do segundo atributo
    switch (escolha2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            sprintf(atributo2, "Populacao");
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            sprintf(atributo2, "Area");
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            sprintf(atributo2, "PIB");
            break;
        case 4:
            valor2_carta1 = pontosturisticos1;
            valor2_carta2 = pontosturisticos2;
            sprintf(atributo2, "Pontos Turisticos");
            break;
        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            sprintf(atributo2, "Densidade Populacional");
            break;
        case 6:
            valor2_carta1 = pibpercapita1;
            valor2_carta2 = pibpercapita2;
            sprintf(atributo2, "PIB per Capita");
            break;
    }

    // Aplica a regra de densidade populacional (menor valor vence)
    if (escolha1 == 5) {
        valor1_carta1 = valor1_carta1 * -1;
        valor1_carta2 = valor1_carta2 * -1;
    }
    if (escolha2 == 5) {
        valor2_carta1 = valor2_carta1 * -1;
        valor2_carta2 = valor2_carta2 * -1;
    }

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição e Resultado
    printf("\n--- Resultado da Comparacao ---\n");
    printf("Atributos comparados: %s e %s\n", atributo1, atributo2);

    printf("Carta 1 (%s): %s = %f, %s = %f\n", nomecidade1, atributo1, valor1_carta1, atributo2, valor2_carta1);
    printf("Soma total: %f\n", soma1);
    printf("Carta 2 (%s): %s = %f, %s = %f\n", nomecidade2, atributo1, valor1_carta2, atributo2, valor2_carta2);
    printf("Soma total: %f\n", soma2);

    // Comparação final usando o operador ternário
    printf("Resultado: ");
    (soma1 > soma2) ? printf("Carta 1 (%s) venceu!\n", nomecidade1) : (soma2 > soma1) ? printf("Carta 2 (%s) venceu!\n", nomecidade2) : printf("Empate!\n");

    return 0;
}
