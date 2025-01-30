#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[5];
    char nome[50];
    int populacao, pontos_turisticos;
    float area, PIB;

    printf("Informe o código da carta: \n");
    scanf("%s", codigo);

    printf("Informe o nome da Cidade: \n");
    scanf("%s", nome);

    printf("Informe sua população: \n");
    scanf("%d", &populacao);

    printf("Informe a área: \n");
    scanf("%f", &area);

    printf("Informe o PIB: \n");
    scanf("%f", &PIB);

    printf("Informe o nº de pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos);

    printf("\n=== Dados da Cidade ===\n");
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", PIB);
    printf("Pontos Turísticos: %d \n", pontos_turisticos);
    printf("===========================");
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
