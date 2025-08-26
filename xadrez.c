#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Declaração de variaveis
    char mov_acima[10] = "cima";
    char mov_abaixo[10] = "baixo"; 
    char mov_esquerda[10] = "esquerda";
    char mov_direita[10] = "direita";
    int num_mov;
    int opcao;
    int status = 1;
    char menu[300] = "Digite a peça que deseja movimentar:\n 1 - Torre\n 2 - Bispo\n 3 - Rainha\n 4 - Sair do jogo\n";
    char mov_vertical[10], mov_horizontal[10];

    //Exibição do menu e leitura da opção
    while(status == 1){
        printf("%s", menu);
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Você escolheu a torre\n");
                printf("Movimento da torre:\n");
                num_mov = 5;
                for(int i = 1; i <= num_mov; i++){
                    printf("Passo %d: 1 casa para direita\n", i);
                }
                break;
                
            case 2:
                printf("Você escolheu o bispo\n");
                printf("Movimento diagonal:\n");
                num_mov = 5;
                for(int i = 1; i <= num_mov; i++){
                    printf("Passo %d: 1 casa na diagonal para cima e direita\n", i);
                }
                break;

            case 3:
                printf("Você escolheu a rainha\n");
                printf("Movimento diagonal:\n");
                num_mov = 8;
                for(int i = 1; i <= num_mov; i++){
                    printf("Passo %d: 1 casa para direita e 1 casa para cima\n", i);
                }
                break;

            case 4:
                printf("Saindo do jogo...\n");
                status = 0;
                break;

            default:
                printf("Opção inválida, tente novamente.\n");
        }
    }
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
