#include <stdio.h>

#define TAMANHO_TABULEIRO 5

void exibirCoordenadas(int navio[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Navio parte %d: (%d, %d)\n", i + 1, navio[i][0], navio[i][1]);
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Navio vertical (3 partes)
    int navioVertical[3][2] = {{1, 1}, {2, 1}, {3, 1}};
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVertical[i][0]][navioVertical[i][1]] = 1;
    }

    // Navio horizontal (4 partes)
    int navioHorizontal[4][2] = {{0, 2}, {0, 3}, {0, 4}, {0, 5}};
    for (int i = 0; i < 4; i++) {
        tabuleiro[navioHorizontal[i][0]][navioHorizontal[i][1]] = 1;
    }

    printf("Coordenadas do navio vertical:\n");
    exibirCoordenadas(navioVertical, 3);

    printf("\nCoordenadas do navio horizontal:\n");
    exibirCoordenadas(navioHorizontal, 4);

    return 0;
}