#include <stdio.h>

int main() {

    // Dados da Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada Carta 1
    printf("=== CARTA 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("\n=== CARTA 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição Carta 1
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Exibição Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
}
