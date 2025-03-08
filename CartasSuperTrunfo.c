#include <stdio.h>

int main() {  
   // variáveis
    char estado [10], estado2 [10];
    char codigo [10], codigo2 [10];
    char cidade [50], cidade2 [50];
    float area, pib, area2, pib2;
    int pontos_turisticos, populacao, pontos_turisticos2, populacao2;

   // funcões pra entrada das informações da primeira carta

    printf("Carata 1:\n\n");

    printf("Estado: ");
    scanf("%s", estado);

    printf("Código da Carta: ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // funcões pra entrada das informações da segunda carta

    printf("Carata 2:\n\n");

    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Numeros de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    system("clear");

    // funçôes para a saida das informações da Carta 1

    printf("Informações da Cidade:\n");
    printf("Carta 1:\n\n"); 
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.2f km²\n", area);
    printf("-PIB: %.2f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);

    // funçôes para a saida das informações da Carta 2

    printf("Carta 2:\n\n");
    printf("-Código da Carta: %s\n", codigo2);
    printf("-Nome da Cidade: %s\n", cidade2);
    printf("-População: %d\n", populacao2);
    printf("-Área: %.3f km²\n", area2);
    printf("-PIB: %.1f bilhões de reais\n", pib2);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}