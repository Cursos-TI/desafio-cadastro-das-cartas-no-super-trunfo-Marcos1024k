#include <stdio.h>

typedef struct {
    char codigoCarta[4]; 
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Leitura dos dados da Carta 1
    printf("Digite o código da carta 1 (max 3 caracteres): ");
    scanf("%s", carta1.codigoCarta);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // Leitura dos dados da Carta 2
    printf("\nDigite o código da carta 2 (max 3 caracteres): ");
    scanf("%s", carta2.codigoCarta);
    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // Impressão dos dados da Carta 1
    printf("\nDados da Carta 1:\n");
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           carta1.codigoCarta, carta1.populacao, carta1.area, carta1.pib, carta1.numPontosTuristicos);

    // Impressão dos dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           carta2.codigoCarta, carta2.populacao, carta2.area, carta2.pib, carta2.numPontosTuristicos);

    return 0;
}
