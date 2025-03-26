#include <stdio.h>

int main() {

    printf("\n*** DESAFIO SUPER TRUNFO. NIVEL: AVENTUREIRO***\n"); // Atuallização de Nivel do trabalho!

    // Declaração das variáveis para as duas cartas
    
    char estado_1, estado_2;  
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade1, perCapita1; // Inserção das variáveis para o calculo de densidade popilacional e renda per capta para carta 1
    float densidade2, perCapita2; // Inserção das variáveis para o calculo de densidade popilacional e renda per capta para carta 2


    // Entrada de dados para a primeira carta
    
    printf("\n*** Digite os dados da Carta 1 ***\n");
    
    printf("\nDigite a letra do Estado: \n");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf("%s", nome_da_cidade_1);

    printf("Digite a população: \n");
    scanf("%d", &populacao_1);        

    printf("Digite a área: \n");
    scanf("%f", &area_1);             //Não utilizar virgua nas casas decimais//

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);              //Não utilizar virgua nas casas decimais//

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    densidade1 = populacao_1 / area_1; // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo de Densidade populacional da carta 1
    perCapita1 = pib_1 / populacao_1;  // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo da Renda Per Capta da carta 1

    // Entrada de dados para a segunda carta
    
    printf("\n *** Digite os dados da Carta 2 ***\n");
    printf("\nDigite a letra do Estado: \n");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta_2);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf("%s", nome_da_cidade_2);

    printf("Digite a população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área: \n");
    scanf("%f", &area_2);             //Não utilizar virgua nas casas decimais//

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);              //Não utilizar virgua nas casas decimais//

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    densidade2 = populacao_2 / area_2;  // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo de Densidade populacional da carta 2
    perCapita2 = pib_2 / populacao_2;  // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo da Renda Per Capta da carta 2

    // Saída de dados da carta 1//
    
    printf("\n=== Dados da Carta 1 ===\n");
    printf("\nCódigo: %s\n", codigo_da_carta_1);
    printf("Estado: %c\n", estado_1);
    printf("Cidade: %s\n", nome_da_cidade_1);
    printf("População: %d de habitantes.\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); //Impressão da nova funcionalidade: Calculo da densidade populacional da carta 1
    printf("Pib per Capita: %.2f Reais\n", perCapita1);  //Impressão da nova funcionalidade: Calculo da renda per capta da carta 1

    // Saida de dados da carta dois//
    printf("\n=== Dados da Carta 2 ===\n");
    printf("\nCódigo: %s\n", codigo_da_carta_2);
    printf("Estado: %c\n", estado_2);
    printf("Cidade: %s\n", nome_da_cidade_2);
    printf("População: %d de habitantes.\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);  //Impressão da nova funcionalidade: Calculo da densidade populacional da carta 2
    printf("Pib per Capita: %.2f Reais\n", perCapita2);  //Impressão da nova funcionalidade: Calculo da renda per capta da carta 2


    return 0;
}
