#include <stdio.h>

// Definindo o tamanho máximo para o código da carta
#define MAX_CODIGO_LEN 4 // Para códigos de até 3 caracteres (3 + \0)

typedef struct {
    char codigoCarta[MAX_CODIGO_LEN]; // Acomoda até 3 caracteres + '\0'
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional; // Atributo calculado
    float pibPerCapita;          // Atributo calculado
} Carta; // Mantendo o nome Carta


int main() {
    // --- Introdução ao Jogo ---
    printf("Bem-vindo ao Jogo Super Trunfo - Países!\n");
    printf("-------------------------------\n\n");
    // -------------------------

    Carta carta1, carta2;

    // --- Leitura e Cálculo dos Dados da Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");
    printf("Digite o código da carta 1 (máx. 3 caracteres): ");
    scanf("%3s", carta1.codigoCarta); // Usando %3s para segurança
    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);
    
    // ATENÇÃO: Sem IF, a divisão por zero pode TRAVAR o programa
    // Certifique-se de que a Área e a População digitadas NÃO sejam zero.
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;


    // --- Leitura e Cálculo dos Dados da Carta 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");
    printf("Digite o código da carta 2 (máx. 3 caracteres): ");
    scanf("%3s", carta2.codigoCarta); // Usando %3s para segurança
    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);
    
    // ATENÇÃO: Sem IF, a divisão por zero pode TRAVAR o programa
    // Certifique-se de que a Área e a População digitadas NÃO sejam zero.
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;

    // --- Impressão dos Dados da Carta 1 ---
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigoCarta);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta1.pibPerCapita);

    // --- Impressão dos Dados da Carta 2 ---
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigoCarta);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta2.pibPerCapita);

    return 0;
}