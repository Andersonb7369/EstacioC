#include <stdio.h>
#include <stdlib.h>

#define NUM_ESTADOS 2
#define NUM_CIDADES 2

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCidades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    char estados[] = "ABCDEFGH";
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("Cadastro da cidade %c%02d:\n", estados[i], j + 1);
            sprintf(cidades[i][j].codigo, "%c%02d", estados[i], j + 1);
            printf("População: ");
            scanf("%d", &cidades[i][j].populacao);
            printf("Área: ");
            scanf("%f", &cidades[i][j].area);
            printf("PIB: ");
            scanf("%f", &cidades[i][j].pib);
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[i][j].pontos_turisticos);
            printf("\n");
        }
    }
}

void exibirCidades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("Cidade %s:\n", cidades[i][j].codigo);
            printf("População: %d\n", cidades[i][j].populacao);
            printf("Área: %.2f\n", cidades[i][j].area);
            printf("PIB: %.2f\n", cidades[i][j].pib);
            printf("Número de pontos turísticos: %d\n", cidades[i][j].pontos_turisticos);
            printf("\n");
        }
    }
}

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];
    cadastrarCidades(cidades);
    exibirCidades(cidades);
    return 0;
}