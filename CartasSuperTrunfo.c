#include <stdio.h>

int main() {
    char carta1Estado;
    char carta1Codigo[10];
    char carta1Cidade[50];
    int carta1Populacao;
    float carta1Area;
    float carta1Pib;
    int carta1Ponto;

    char carta2Estado;
    char carta2Codigo[10];
    char carta2Cidade[50];
    int carta2Populacao;
    float carta2Area;
    float carta2Pib;
    int carta2Ponto;

    printf("Carta 1\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &carta1Estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", carta1Codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1Cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &carta1Populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &carta1Area);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &carta1Pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &carta1Ponto);

    printf("\nCarta 2\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &carta2Estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", carta2Codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2Cidade);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &carta2Populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &carta2Area);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &carta2Pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &carta2Ponto);

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

    return 0;
}
