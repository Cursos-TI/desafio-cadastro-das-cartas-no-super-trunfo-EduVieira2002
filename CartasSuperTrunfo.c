#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definição de variáveis para as cartas.

    char codigo_estado_1, codigo_estado_2;
    char codigo_carta_1[4], codigo_carta_2[4];
    char nome_cidade_1[30], nome_cidade_2[30];
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pts_turisticos_1, pts_turisticos_2;
    float densidade_populacional_1, densidade_populacional_2;
    float pib_per_capita_1, pib_per_capita_2;

    // Cadastro das Cartas:
    // Carta 1

    printf("Informações da primeira carta: \n \n");
    printf("Digite o código do estado (letra de A a H): ");
    scanf("%c", &codigo_estado_1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta_1);
    printf("Digite o nome da cidade: ");
    getchar();   // Para limpar o buffer de entrada e consumir o /n remanescente do último scanf
    fgets(nome_cidade_1, sizeof(nome_cidade_1), stdin);
    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao_1);
    printf("Digite a área da cidade em kilômetros quadrados: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos_1);

    //Carta 2

    printf("\n Informações da segunda carta: \n \n");
    printf("Digite o código do estado (letra de A a H): ");
    getchar();
    scanf("%c", &codigo_estado_2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta_2);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(nome_cidade_2, sizeof(nome_cidade_2), stdin);
    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao_2);
    printf("Digite a área da cidade em kilômetros quadrados: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &pts_turisticos_2);

    // Cálculo da densidade populacional

    densidade_populacional_1 = populacao_1 / area_1;
    densidade_populacional_2 = populacao_2 / area_2;

    // Cálculo do PIB per Capita

    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    // Exibição dos Dados das Cartas:

    printf(" \n Carta 1: \n \n");
    printf("Estado: %c \n", codigo_estado_1);
    printf("Código: %s \n", codigo_carta_1);
    printf("Nome da Cidade: %s", nome_cidade_1);
    printf("População: %ld \n", populacao_1);
    printf("Área: %.2f km^2 \n", area_1);
    printf("PIB: %.2f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos_1);
    printf("Densidade populacional: %.2f hab/km^2 \n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_1);

    printf("\n Carta 2: \n \n");
    printf("Estado: %c \n", codigo_estado_2);
    printf("Código: %s \n", codigo_carta_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %ld \n", populacao_2);
    printf("Área: %.2f km^2 \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n", pts_turisticos_2);
    printf("Densidade populacional: %.2f hab/km^2 \n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_2);

    // Cálculo do SuperPoder

    float SuperPoder_1, SuperPoder_2;

    SuperPoder_1 = (float) populacao_1 + area_1 + pib_1 + (float) pts_turisticos_1 + (1 / densidade_populacional_1) + pib_per_capita_1;
    SuperPoder_2 = (float) populacao_2 + area_2 + pib_2 + (float) pts_turisticos_2 + (1 / densidade_populacional_2) + pib_per_capita_2;


    // Comparação das cartas

    printf("\nComparação das cartas: \n");
    printf("Mensagem 1: Carta 1 venceu! / Mensagem 0: Carta 2 venceu!\n\n");

    printf("População: %d\n", populacao_1 > populacao_2);
    printf("Área: %d\n", area_1 > area_2);
    printf("PIB: %d\n", pib_1 > pib_2);
    printf("Pontos turísticos: %d\n", pts_turisticos_1 > pts_turisticos_2);
    printf("Densidade populacional: %d\n", densidade_populacional_1 < densidade_populacional_2);
    printf("PIB per Capita: %d\n", pib_per_capita_1 > pib_per_capita_2);
    printf("SuperPoder: %d\n", SuperPoder_1 > SuperPoder_2);

    return 0;
}
