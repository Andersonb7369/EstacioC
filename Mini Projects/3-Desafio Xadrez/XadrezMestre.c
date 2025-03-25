#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8


void moverBispo(int movimentos) {
    if (movimentos == 0) return;
    printf("Diagonal direita para cima\n");
    moverBispo(movimentos - 1);
}

void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

int main() {
    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    for (int i = 0, j = 0; i < 2 || j < 1; i++) {
        if (i < 2) {
            printf("Baixo\n");
        }
        if (i == 2) {
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    return 0;
}