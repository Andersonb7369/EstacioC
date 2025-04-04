#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int BISPO = 3;
    const int TORRE = 5;
    const int RAINHA = 8;
    int i;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (i = 1; i <= BISPO;  i++){
        printf("\nBISPO: cima-direita");
    } 
    
    printf("\n--------------------");
    i = 0; // zerando a variavel
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    while (i < TORRE)
    {
        printf("\nTorre: direita"); 
        i++;   
    }
    
    printf("\n--------------------");
    i = 0; // zerando a variavel
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do
    {
        printf("\nRainha: esquerda");
        i++;
    } while (i < RAINHA);
    
    printf("\n--------------------");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int i = 0, j = 0; i < 2 || j < 1; i++) {
        if (i < 2) {
            printf("\nCavalo: Baixo");
        }
        if (i == 2) {
            while (j < 1) {

                printf("\nCavalo: Esquerda");
                j++;
            }
        }
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}