#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char estado_1, estado_2;  
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    // Entrada de dados para a primeira carta
    printf("*** Digite os dados da Carta 1 ***\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf("%s", nome_da_cidade_1);

    printf("Digite a população: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    // Entrada de dados para a segunda carta
    printf("\n *** Digite os dados da Carta 2 ***\n");
    printf("Digite a letra do Estado: \n");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta_2);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf("%s", nome_da_cidade_2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    // Exibição dos dados das duas cartas
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", codigo_da_carta_1);
    printf("Estado: %c\n", estado_1);
    printf("Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d pessoas\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", codigo_da_carta_2);
    printf("Estado: %c\n", estado_2);
    printf("Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d pessoas\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);

    return 0;
}
