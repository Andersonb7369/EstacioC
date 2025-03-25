#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    return 0;
}