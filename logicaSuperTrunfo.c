#include <stdio.h>

int main() {
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("                      JOGO SUPER TRUNFO                       \n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("*****                Cadastro das Cartas                 *****\n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

// Declarando as variáveis globais relacionadas ao jogo Super Trunfo
    // Declarando as variáveis relacionadas a Carta 1 (C1) 
    char estado_C1, codigo_C1[10], cidade_C1[50];
    int p_turistico_C1, pontos_C1 = 0;  // Adicionando variável pontos_C1 para armazenar a pontuação da Carta 1 e inicializando ela com 0
    unsigned long int populacao_C1;
    float area_C1, pib_C1, densidade_pop_C1, pib_percapita_C1, super_poder_C1;

    // Declarando as variáveis relacionadas a Carta 2 (C2)
    char estado_C2, codigo_C2[10], cidade_C2[50];
    int p_turistico_C2, pontos_C2;  // Adicionando variável pontos_C1 para armazenar a pontuação da Carta 1 e inicializando ela com 0
    unsigned long int populacao_C2;
    float area_C2, pib_C2, densidade_pop_C2, pib_percapita_C2, super_poder_C2;

    // Declarando as variáveis para armazenar as escolhas dos dois atributos para comparação pelo usuário
    int atributo1, atributo2;

// Cadastrando as cartas para o jogo Super Trunfo, reutilizando o código criado para tal no primeiro desafio da disciplina de Introdução à Programação de Computadores
    //Cadastrando a Carta 1 (C1)
    printf("CARTA 1\n\n");

    // Entrada de dados C1
    // Solicitando ao usuário que insira as informações para cadastro da C1
    printf("Insira o Estado (uma letra entre A e H - ex: A): \n");
    scanf(" %c", &estado_C1);    // O espaço antes de %c é porque o programa está lendo diretamente a próxima linha. Dessa forma o programa entende que deve ignorar qualquer espaço em branco ou enter antes do caractere.
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04 - Ex: A01): \n");
    scanf("%s", &codigo_C1);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", &cidade_C1);   // O espaço tem a mesma funcionalidade do explicado anteriormente, já o %[^\n] serve para ler strings com espaços como "Santa Catarina" por exemplo.
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
    densidade_pop_C1 = (float)populacao_C1 / area_C1;   //densidade populacional = população da cidade / área da cidade
    pib_percapita_C1 = pib_C1 / (float)populacao_C1;    //pib per capita = pib da cidade / população da cidade  
    super_poder_C1 = (float)populacao_C1 + area_C1 + pib_C1 + pib_percapita_C1 + (float)p_turistico_C1 + (1 / densidade_pop_C1);
                                                        //Super_poder_C1 = populacao + area + pib + p_turisticos + pib_percapita + (1 / densidade_pop)


    //Cadastrando a Carta 2 (C2)
    printf("CARTA 2\n\n");

    // Entrada de dados C2
    // Solicitando ao usuário que insira as informações para cadastro da C2
    printf("Insira o Estado (uma letra entre A e H): \n");
    scanf(" %c", &estado_C2);   // O espaço antes de %c é porque o programa está lendo diretamente a próxima linha. Dessa forma o programa entende que deve ignorar qualquer espaço em branco ou enter antes do caractere.
    printf("Insira o código da carta (a letra do Estado + um número de 01 a 04): \n");
    scanf("%s", &codigo_C2);
    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", &cidade_C2);   //O espaço tem a mesma funcionalidade do explicado anteriormente, já o %[^\n] serve para ler strings com espaços como "Sao Jose" por exemplo.
    printf("Insira a população da cidade: \n");
    scanf("%lu", &populacao_C2);
    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_C2);
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib_C2);
    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &p_turistico_C2);
    
    // Incluindo as operações para atribuir os valores das variáveis da C1 (densidade_pop_C2 / pib_percapita_C2 / super_poder_C2)
    /* As informações necessárias para calcular essas variáveis já foram inseridas pelo usuário na entrada de dados C2*/
    densidade_pop_C2 = (float)populacao_C2 / area_C2;   //densidade populacional = população da cidade / área da cidade
    pib_percapita_C2 = pib_C2 / (float)populacao_C2;    //pib per capita = pib da cidade / população da cidade
    super_poder_C2 = (float)populacao_C2 + area_C2 + pib_C2 + pib_percapita_C2 + (float)p_turistico_C2 + (1 / densidade_pop_C2);
                                                        //Super_poder_C2 = (float)populacao + area + pib + (float)p_turisticos + pib_percapita + (1 / densidade_pop)

    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("*****                Cartas Cadastradas                  *****\n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

// Saída de dados
    // Imprimindo as informações cadastradas para C1
    printf("CARTA 1\n");
    printf("-------\n\n");
    printf("Estado: %c\n", estado_C1);
    printf("Códido: %s\n", codigo_C1);
    printf("Nome da cidade: %s\n", cidade_C1);
    printf("População: %lu habitantes\n", populacao_C1); 
    printf("Área: %.3f km²\n", area_C1);
    printf("PIB: %.1f bilhões de reais\n", pib_C1 / 1000000000); // Ajuste saída para aparecer 'bilhões de reais'.
    printf("Número de pontos turísticos: %d\n", p_turistico_C1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C1);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C1);
    printf("Super Poder: %.2f\n", super_poder_C1);
    printf("--------------------------------------------------------------\n");

    // Imprimindo as informações cadastradas para C2
    printf("CARTA 2\n");
    printf("-------\n\n");
    printf("Estado: %c\n", estado_C2);
    printf("Códido: %s\n", codigo_C2);
    printf("Nome da cidade: %s\n", cidade_C2);
    printf("População: %lu habitantes\n", populacao_C2); 
    printf("Área: %.3f km²\n", area_C2);
    printf("PIB: %.1f bilhões de reais\n", pib_C2 / 1000000000); // Ajuste saída para aparecer 'bilhões de reais'.
    printf("Número de pontos turísticos: %d\n", p_turistico_C2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_C2);
    printf("PIB per Capita: R$ %.2f\n", pib_percapita_C2);
    printf("Super Poder: %.2f\n", super_poder_C2); 
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

// Implementando Menu Interativo para que o usuário escolha DOIS atributos para usar como base para comparação e definição da carta vencedora nessa rodada do jogo Super Trunfo 
    // Menu Interativo para escolha do primeiro atributo para comparação
    printf("Escolha o primeiro atributo para usar na comparação entre as cartas: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &atributo1);

// Implementando a lógica para comparação das cartas, com base no primeiro atributo escolhido pelo usuário e usando operador ternário (condição ? caso verdadeiro : caso falso)
    switch (atributo1) {
        case 1: {
            populacao_C1 > populacao_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        case 2: {
            area_C1 > area_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        case 3: {
            pib_C1 > pib_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        case 4: {
            p_turistico_C1 > p_turistico_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        case 5: {
            densidade_pop_C1 < densidade_pop_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        case 6: {
            pib_percapita_C1 > pib_percapita_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        case 7: {
            super_poder_C1 > super_poder_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
            break;
        }

        default: {
            printf("Opção inválida! Programa Encerrado.");
        }
    }
    printf("--------------------------------------------------------------\n");
    
    // Menu Interativo para escolha do segundo atributo para comparação
    printf("Escolha o segundo atributo para usar na comparação entre as cartas: \n");
    printf("ATENÇÃO: Você não pode escolher o mesmo atributo que escolheu anteriormente!\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &atributo2);

// Implementando a lógica para comparação das cartas, com base no segundo atributo escolhido pelo usuário
    if (atributo2 == atributo1) {
        printf("Opção inválida! Você não pode escolher o mesmo atributo que escolheu anteriormente! Programa Encerrado.");
        return 0; // Encerra o programa caso o usuário escolha o mesmo atributo
    } else {
        switch (atributo2) {
            case 1: {
                populacao_C1 > populacao_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            case 2: {
                area_C1 > area_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            case 3: {
                pib_C1 > pib_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            case 4: {
                p_turistico_C1 > p_turistico_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            case 5: {
                densidade_pop_C1 < densidade_pop_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            case 6: {
                pib_percapita_C1 > pib_percapita_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            case 7: {
                super_poder_C1 > super_poder_C2 ? pontos_C1++ : pontos_C2++; // Operador Ternário: caso a carta 1 vença, acrescenta-se 1 ponto no pontuação dela (pontos_C1), caso contrário acrescenta-se 1 ponto na pontuação da carta 2 (pontos_C2)
                break;
            }

            default: {
                printf("Opção inválida! Programa Encerrado.");
            }
        }    
    }    

    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("*****             Resultado Final da Partida             *****\n");
    printf("--------------------------------------------------------------\n");
    printf("--------------------------------------------------------------\n");

// Implementando a lógica para comparação das cartas, com base no atributo escolhido pelo usuário no menu interativo
    switch (opcao) {
        case 1 {
            printf("Atributo de Comparação Escolhido: POPULAÇÃO\n"); 
            printf("Carta 1 (%s) - População: %lu\n", cidade_C1, populacao_C1);
            printf("Carta 2 (%s) - População: %lu\n", cidade_C2, populacao_C2);
            printf("--------------------------------------------------------------\n");
            if (populacao_C1 > populacao_C2) {
                printf("VENCEDORA ---> Carta 1 (%s) com maior população.\n", cidade_C1);
            } else if (populacao_C2 > populacao_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com maior população.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem população igual.\n");
            }
            break;
        }

        case 2 {
            printf("Atributo de Comparação: ÁREA\n"); 
            printf("Carta 1 (%s) - Área: %.3f\n", cidade_C1, area_C1);
            printf("Carta 2 (%s) - Área: %.3f\n", cidade_C2, area_C2);
            printf("--------------------------------------------------------------\n");
            if (area_C1 > area_C2) {
                printf("VENCEDORA ---> Carta 1 (%s) com maior área.\n", cidade_C1);
            } else if (area_C2 > area_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com maior área.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem área igual.\n");
            }
            break;
        }

        case 3 {
            printf("Atributo de Comparação: PIB\n"); 
            printf("Carta 1 (%s) - PIB: %lu\n", cidade_C1, pib_C1);
            printf("Carta 2 (%s) - PIB: %lu\n", cidade_C2, pib_C2);
            printf("--------------------------------------------------------------\n");
            if (pib_C1 > pib_C2) {
                printf("VENCEDORA ---> Carta 1 (%s) com maior PIB.\n", cidade_C1);
            } else if (pib_C2 > pib_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com maior PIB.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem PIB igual.\n");
            }
            break;
        }

        case 4 {
            printf("Atributo de Comparação: PONTOS TURÍSTICOS\n"); 
            printf("Carta 1 (%s) - Pontos Turísticos: %d\n", cidade_C1, p_turistico_C1);
            printf("Carta 2 (%s) - Pontos Turísticos: %d\n", cidade_C2, p_turistico_C2);
            printf("--------------------------------------------------------------\n");
            if (p_turistico_C1 > p_turistico_C2) {
                printf("VENCEDORA ---> Carta 1 (%s) com mais pontos turísticos.\n", cidade_C1);
            } else if (p_turistico_C2 > p_turistico_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com mais pontos turísticos.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem a mesma quantidade de pontos turísticos.\n");
            }
            break;
        }

        case 5 {
            printf("Atributo de Comparação: DENSIDADE POPULACIONAL\n"); //Nesse atributo vence a carta com menor densidade populacional
            printf("Carta 1 (%s) - Densidade Populacional: %.2f\n", cidade_C1, densidade_pop_C1);
            printf("Carta 2 (%s) - Densidade Populacional: %.2f\n", cidade_C2, densidade_pop_C2);
            printf("--------------------------------------------------------------\n");
            if (densidade_pop_C1 < densidade_pop_C2) { 
                printf("VENCEDORA ---> Carta 1 (%s) com menor densidade demográfica.\n", cidade_C1);
            } else if (densidade_pop_C2 < densidade_pop_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com menor densidade demográfica.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem a mesma densidade populacional.\n");
            }
            break;
        }

        case 6 {
            printf("Atributo de Comparação: PIB PER CAPITA\n"); 
            printf("Carta 1 (%s) - PIB per Capita: %lu\n", cidade_C1, pib_percapita_C1);
            printf("Carta 2 (%s) - PIB per Capita: %lu\n", cidade_C2, pib_percapita_C2);
            printf("--------------------------------------------------------------\n");
            if (pib_percapita_C1 > pib_percapita_C2) {
                printf("VENCEDORA ---> Carta 1 (%s) com maior PIB per Capita.\n", cidade_C1);
            } else if (pib_percapita_C2 > pib_percapita_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com maior PIB per Capita.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem PIB per Capita igual.\n");
            }
            break;
        }

        case 7 {
            printf("Atributo de Comparação: SUPER PODER\n"); 
            printf("Carta 1 (%s) - Super Poder: %lu\n", cidade_C1, super_poder_C1);
            printf("Carta 2 (%s) - Super Poder: %lu\n", cidade_C2, super_poder_C2);
            printf("--------------------------------------------------------------\n");
            if (super_poder_C1 > super_poder_C2) {
                printf("VENCEDORA ---> Carta 1 (%s) com maior Super Poder.\n", cidade_C1);
            } else if (super_poder_C2 > super_poder_C1) {
                printf("VENCEDORA ---> Carta 2 (%s) com maior Super Poder.\n", cidade_C2);
            }else {
                printf("EMPATE!!! Ambas as cartas tem Super Poder igual.\n");
            }
            break;
        }

        default {
            printf("Opção invalida! Programa Encerrado.")
        }
    }

    printf("--------------------------------------------------------------\n");

    return 0;
}
