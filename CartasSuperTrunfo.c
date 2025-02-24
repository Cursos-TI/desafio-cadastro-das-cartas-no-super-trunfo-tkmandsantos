#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    printf("Informações Primeira Carta...\n");
    printf("Informe a letra do estado (A-H) para a primeira carta: \n");
    scanf(" %c", &estado1);
    printf("Informe o código da carta (ex: A01): \n");
    scanf(" %s", &codigo1);
    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);
    printf("Informe a população: \n");
    scanf(" %d", &populacao1);
    printf("Informe a área (km²): \n");
    scanf(" %f", &area1);
    printf("Informe o PIB: \n");
    scanf(" %f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos1);
    

    printf("\nInformações Segunda Carta...\n");
    printf("Informe a letra do estado (A-H) para a segunda carta: \n");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (ex: B02): \n");
    scanf(" %s", &codigo2);
    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);
    printf("Informe a população: \n");
    scanf(" %d", &populacao2);
    printf("Informe a área (km²): \n");
    scanf(" %f", &area2);
    printf("Informe o PIB: \n");
    scanf(" %f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos2);
    
    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}
