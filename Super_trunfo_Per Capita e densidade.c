#include <stdio.h>

int main() {  
   // variáveis
    char estado [50];
    char codigo [10];
    char cidade [50];
    float area, pib;
    float densiade, per_capita;
    int pontos_turisticos, populacao;

   // funcões de entrada das informações da Carta 1
    printf("Carta 1:\n\n");

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

   //operacões de densidade e PIB per Capita
   densiade = (float)populacao /  area;

   per_capita = (float)populacao / pib;

   // funçôes de saida das informações da Carta 1
    printf("** Carta 1 **\n\n");
    printf("-Estado: %s\n", estado);
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.2f km²\n", area);
    printf("-PIB: %.2f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);
    printf("-Densidade Populacional: %.2f\n", densiade);
    printf("-PIB per Capita: %.2f\n", per_capita);


    // funcões de das informações da Carta 2
    printf("Carta 2:\n\n");

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
   
   
    //operacões de densidade e PIB per Capita
    densiade = (float)populacao /  area;
   
    per_capita = (float)populacao / pib;
   
    // funçôes de saida das informações da Carta 2

    printf("** Carta 2 **\n");
    printf("-Estado: %s\n", estado);
    printf("-Código da Carta: %s\n", codigo);
    printf("-Nome da Cidade: %s\n", cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.2f km²\n", area);
    printf("-PIB: %.2f bilhões de reais\n", pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);
    printf("-Densidade Populacional: %.2f\n", densiade);
    printf("-PIB per Capita: %.2f\n", per_capita);

    return 0;  
}
