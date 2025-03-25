#include <stdio.h>
#include <stdlib.h>

#define NUM_ESTADOS 2
#define NUM_CIDADES 1

typedef struct {
    int carta;
    char estado;
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Cidade;
 
void cadastrarCartas(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    char estados[] = "ABCDEF";
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {

            cidades[i][j].carta = i + 1;
            cidades[i][j].estado = estados[j];

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


void calcularPropriedades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            cidades[i][j].densidade_populacional = cidades[i][j].populacao / cidades[i][j].area;
            cidades[i][j].pib_per_capita = cidades[i][j].pib / cidades[i][j].populacao;
        }
    }
}

void exibirCartas(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("Carta %d\n", cidades[i][j].carta);
            printf("Estado %c\n", cidades[i][j].estado);
            printf("Cidade %s:\n", cidades[i][j].codigo);
            printf("População: %d\n", cidades[i][j].populacao);
            printf("Área: %.2f\n", cidades[i][j].area);
            printf("PIB: %.2f\n", cidades[i][j].pib);
            printf("Número de pontos turísticos: %d\n", cidades[i][j].pontos_turisticos);
            printf("Densidade Populacional: %.2f\n", cidades[i][j].densidade_populacional);
            printf("PIB per Capita: %.2f\n", cidades[i][j].pib_per_capita);
            printf("\n");
        }
    }
}

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];
    cadastrarCartas(cidades);
    calcularPropriedades(cidades);
    exibirCartas(cidades);
    return 0;
}