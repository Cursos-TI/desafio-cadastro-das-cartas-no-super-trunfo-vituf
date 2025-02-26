#include <stdio.h>

int main() {  
   // variáveis
    char estado [50];
    char codigo [10];
    char cidade [50];
    float area, pib;
    int pontos_turisticos, populacao;

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

    system("clear");

   // funçôes para a saida das informações da Carta 1

    printf("Informações da Cidade:\n");
    printf("Carta 1:\n\n"); 
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.3f km²\n", area);
    printf("-PIB: %.1f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);

    // funcões pra entrada das informações da primeira carta
    printf("Carata 2:\n\n");

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


    // funçôes para a saida das informações da Carta

    printf("Carta 2:\n\n");
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.3f km²\n", area);
    printf("-PIB: %.1f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}