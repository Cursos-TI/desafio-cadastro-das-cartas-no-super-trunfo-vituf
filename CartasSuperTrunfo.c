#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Código da Cidade: ");
    scanf("%s", &codigo);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Numeros de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Código da Carta: %s\nNome da Cidade: %s\n", codigo, cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\nPIB: %.2f\n", area, pib);
    printf("Numero de pontos turísticos: %d", pontos_turisticos);


    return 0;
}

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    



















