#include <stdio.h>

#define TAMANHO_TABULEIRO 5

void exibirCoordenadas(int navio[][2], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Navio parte %d: (%d, %d)\n", i + 1, navio[i][0], navio[i][1]);
    }
}

int main() {
    int tabuleiro[10][10] = {0};

    // Navio vertical (3 partes)
    int navioVertical[3][2] = {{1, 1}, {2, 1}, {3, 1}};
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVertical[i][0]][navioVertical[i][1]] = 3;
    }

    // Navio horizontal (4 partes)
    int navioHorizontal[4][2] = {{0, 2}, {0, 3}, {0, 4}, {0, 5}};
    for (int i = 0; i < 4; i++) {
        tabuleiro[navioHorizontal[i][0]][navioHorizontal[i][1]] = 3;
    }

    // Navio diagonal (3 partes)
    int navioDiagonal1[3][2] = {{4, 4}, {5, 5}, {6, 6}};
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioDiagonal1[i][0]][navioDiagonal1[i][1]] = 3;
    }

    // Navio diagonal (4 partes)
    int navioDiagonal2[4][2] = {{7, 1}, {8, 2}, {9, 3}, {10, 4}};
    for (int i = 0; i < 4; i++) {
        tabuleiro[navioDiagonal2[i][0]][navioDiagonal2[i][1]] = 3;
    }

    printf("Coordenadas do navio vertical:\n");
    exibirCoordenadas(navioVertical, 3);

    printf("\nCoordenadas do navio horizontal:\n");
    exibirCoordenadas(navioHorizontal, 4);

    printf("\nCoordenadas do navio diagonal 1:\n");
    exibirCoordenadas(navioDiagonal1, 3);

    printf("\nCoordenadas do navio diagonal 2:\n");
    exibirCoordenadas(navioDiagonal2, 4);

    printf("\nTabuleiro completo:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}