#include <stdio.h>

int main() {
    char carta1Estado;
    char carta1Codigo[10];
    char carta1Cidade[50];
    int carta1Populacao;
    float carta1Area;
    float carta1Pib;
    int carta1Ponto;
    float carta1DensidadePopulacional;
    float carta1PibPercapita;

    char carta2Estado;
    char carta2Codigo[10];
    char carta2Cidade[50];
    int carta2Populacao;
    float carta2Area;
    float carta2Pib;
    int carta2Ponto;
    float carta2DensidadePopulacional;
    float carta2PibPercapita;

    printf("Carta 1\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &carta1Estado);
    getchar();

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &carta1Codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &carta1Cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &carta1Populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &carta1Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1Pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &carta1Ponto);
    getchar();

    printf("\nCarta 2\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &carta2Estado);
    getchar();

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &carta2Codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &carta2Cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &carta2Populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &carta2Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2Pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &carta2Ponto);
    getchar();

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1Estado);
    printf("Código: %s\n", carta1Codigo);
    printf("Nome da Cidade: %s\n", carta1Cidade);
    printf("População: %d\n", carta1Populacao);
    printf("Área: %.2f km²\n", carta1Area);
    printf("PIB: %.2f bilhões de reais\n", carta1Pib);
    printf("Número de Pontos Turísticos: %d\n", carta1Ponto);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2Estado);
    printf("Código: %s\n", carta2Codigo);
    printf("Nome da Cidade: %s\n", carta2Cidade);
    printf("População: %d\n", carta2Populacao);
    printf("Área: %.2f km²\n", carta2Area);
    printf("PIB: %.2f bilhões de reais\n", carta2Pib);
    printf("Número de Pontos Turísticos: %d\n", carta2Ponto);

    carta1DensidadePopulacional = carta1Populacao / carta1Area;
    carta1PibPercapita = carta1Pib / carta1Populacao;

    carta2DensidadePopulacional = carta2Populacao / carta2Area;
    carta2PibPercapita = carta2Pib / carta2Populacao;

    printf("\nComparação de cartas (Atributo: Densidade populacional): \n\n");
    printf("Carta 1 - %s: %.2f \n", carta1Cidade, carta1DensidadePopulacional);
    printf("Carta 2 - %s: %.2f \n\n", carta2Cidade, carta2DensidadePopulacional);

    if (carta1DensidadePopulacional < carta2DensidadePopulacional) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1Cidade);
    } else if (carta1DensidadePopulacional > carta2DensidadePopulacional) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2Cidade);
    } else {
        printf("Resultado: Cartas 1 (%s) e 2 (%s) empataram!!\n", carta1Cidade, carta2Cidade);
    }

    return 0;
}
