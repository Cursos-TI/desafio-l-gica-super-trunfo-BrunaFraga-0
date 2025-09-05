#include <stdio.h>

int main() {
    printf("--------------------------------------------------------------\n");
    printf("                      JOGO SUPER TRUNFO                       \n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("*****                CADASTRO DAS CARTAS                 *****\n");
    printf("--------------------------------------------------------------\n");

// Cadastrando as cartas para o jogo Super Trunfo, reutilizando o código criado para tal no primeiro desafio da disciplina de Introdução à Programação de Computadores
    
    // Declarando as variáveis para a Carta 1 (C1) 
    char estado_C1, codigo_C1[10], cidade_C1[50];
    int p_turistico_C1;
    unsigned long int populacao_C1;
    float area_C1, pib_C1, densidade_pop_C1, pib_percapita_C1, super_poder_C1;

    // Declarando as variáveis para a Carta 2 (C2)
    char estado_C2, codigo_C2[10], cidade_C2[50];
    int p_turistico_C2;
    unsigned long int populacao_C2;
    float area_C2, pib_C2, densidade_pop_C2, pib_percapita_C2, super_poder_C2;

//Cadastrando a Carta 1 (C1)
    printf("CARTA 1\n\n");

// Entrada de dados C1
    // Solicitando ao usuário que insira as informações para cadastro da C1
    printf("Insira o Estado (uma letra entre A e H - ex: A): \n");
    scanf("%c", &estado_C1);
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04 - Ex: A01): \n");
    scanf("%s", &codigo_C1);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_C1);
    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao_C1);
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C1);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C1);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C1);
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

// Incluindo as operações para atribuir os valores das variáveis da C1 (densidade_pop_C1 / pib_percapita_C1 / super_poder_C1)
    /* As informações necessárias para calcular essas variáveis já foram inseridas pelo usuário na entrada de dados C1*/
    densidade_pop_C1 = (float)populacao_C1 / area_C1; //densidade populacional = população da cidade / área da cidade
    pib_percapita_C1 = pib_C1 / (float)populacao_C1; //pib per capita = pib da cidade / população da cidade  
    super_poder_C1 = (float)populacao_C1 + area_C1 + pib_C1 + pib_percapita_C1 + (float)p_turistico_C1 + (1 / densidade_pop_C1);
    //Super_poder_C1 = (float)populacao + area + pib + (float)p_turisticos + pib_percapita + (1 / densidade_pop)


//Cadastrando a Carta 2 (C2)
    printf("CARTA 2\n\n");

// Entrada de dados C2
    // Solicitando ao usuário que insira as informações para cadastro da C2
    printf("Insira o Estado (uma letra entre A e H): \n");
    scanf("%c", &estado_C2); //O espaço antes de % é porque o programa está lendo diretamente a próxima linha. Foi a forma que encontrei de resolver, pequisando na internet.
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04): \n");
    scanf("%s", &codigo_C2);
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade_C2);
    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao_C2);
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C2);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C2);
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

// Incluindo as operações para atribuir os valores das variáveis da C1 (densidade_pop_C2 / pib_percapita_C2 / super_poder_C2)
    /* As informações necessárias para calcular essas variáveis já foram inseridas pelo usuário na entrada de dados C2*/
    densidade_pop_C2 = (float)populacao_C2 / area_C2; //densidade populacional = população da cidade / área da cidade
    pib_percapita_C2 = pib_C2/ (float)populacao_C2; //pib per capita = pib da cidade / população da cidade
    super_poder_C2 = (float)populacao_C2 + area_C2 + pib_C2 + pib_percapita_C2 + (float)p_turistico_C2 + (1 / densidade_pop_C2);
    //Super_poder_C2 = (float)populacao + area + pib + (float)p_turisticos + pib_percapita + (1 / densidade_pop)

// Saída de dados
    // Imprimindo as informações cadastradas para C1
    printf("CARTA 1\n");
    printf("-------\n\n");
    printf("Estado: %c\n", estado_C1);
    printf("Códido: %s\n", codigo_C1);
    printf("Nome da cidade: %s\n", cidade_C1);
    printf("População: %lu habitantes\n", populacao_C1); 
    printf("Área: %.3f km²\n", area_C1);
    printf("PIB: %.2f bilhões de reais\n", pib_C1 / 1000000000); 
    printf("Número de pontos turísticos: %d\n", p_turistico_C1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C1);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C1);
    printf("Super Poder: %.2f\n", super_poder_C1);
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

    // Imprimindo as informações cadastradas para C2
    printf("CARTA 2\n");
    printf("-------\n\n");
    printf("Estado: %c\n", estado_C2);
    printf("Códido: %s\n", codigo_C2);
    printf("Nome da cidade: %s\n", cidade_C2);
    printf("População: %lu habitantes\n", populacao_C2); 
    printf("Área: %.3f km²\n", area_C2);
    printf("PIB: %.2f bilhões de reais\n", pib_C2 / 1000000000); 
    printf("Número de pontos turísticos: %d\n", p_turistico_C2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C2);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C2);
    printf("Super Poder: %.2f\n", super_poder_C2); 
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
