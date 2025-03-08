#include <stdio.h>

int main() {  
   // variáveis
   char estado [10], estado2 [10];
   char codigo [10], codigo2 [10];
   char cidade [50], cidade2 [50];
   float area, pib, area2, pib2;
   float densiade, per_capita, densiade2, per_capita2;
   int pontos_turisticos, populacao, pontos_turisticos2, populacao2;
  
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

    printf("\n");

    // funcões de das informações da Carta 2

    printf("Carta 2:\n\n");

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

    system ("clear");

   //operacões de densidade e PIB per Capita carta 1
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

    printf("\n");
    
    //operacões de densidade e PIB per Capita carta 2
    densiade = (float)populacao2 /  area2;
   
    per_capita = (float)populacao2 / pib2;
   
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
