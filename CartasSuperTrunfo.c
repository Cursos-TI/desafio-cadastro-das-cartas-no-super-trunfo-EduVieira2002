#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definição de variáveis para as cartas.
    //Carta 1

    char codigo_estado_1;
    char codigo_carta_1[4];
    char nome_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pts_turisticos_1;

    //Carta 2

    char codigo_estado_2;
    char codigo_carta_2[4];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pts_turisticos_2;

    // Cadastro das Cartas:
    // Carta 1
    
    printf("Informações da primeira carta: \n");
    printf("Digite o código do estado (letra de A a H): ");
    scanf("%c", &codigo_estado_1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta_1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_1);
    printf("Digite a área da cidade em kilômetros quadrados: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos_1);

    //Carta 2

    printf("Informações da segunda carta: \n");
    printf("Digite o código do estado (letra de A a H): ");
    scanf("%c", &codigo_estado_2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta_2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_2);
    printf("Digite a área da cidade em kilômetros quadrados: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos_2);

    // Exibição dos Dados das Cartas:

    printf("Carta 1: \n");
    printf("Estado: %c", codigo_estado_1);
    printf("Código: %s \n", codigo_carta_1);
    printf("Nome da Cidade: %s \n", nome_cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %f \n", area_1);
    printf("PIB: %f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d", pts_turisticos_1);

    printf("Carta 2: \n");
    printf("Estado: %c", codigo_estado_2);
    printf("Código: %s \n", codigo_carta_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %f \n", area_2);
    printf("PIB: %f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d", pts_turisticos_2);

    return 0;
}
