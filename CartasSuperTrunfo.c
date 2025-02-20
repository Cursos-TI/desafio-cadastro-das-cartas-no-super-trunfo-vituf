#include <stdio.h>

int main() {  
    
    char codigo [10];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Código da Cidade: ");
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
    
    printf("Informações da Cidade:\n");
    printf("-Código da Carta: %s\n-Nome da Cidade: %s\n", codigo, cidade);
    printf("-População: %d\n", populacao);
    printf("-Área: %.2f km²\n-PIB: %.2f bilhões de reais\n", area, pib);
    printf("-Numero de pontos turísticos: %d\n", pontos_turisticos);


    return 0;
}
