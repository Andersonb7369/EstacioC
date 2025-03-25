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
    float densidade_populacional;
    float pib_per_capita;
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

// Removed duplicate function definition

void calcularPropriedades(Cidade cidades[NUM_ESTADOS][NUM_CIDADES]) {
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            cidades[i][j].densidade_populacional = cidades[i][j].populacao / cidades[i][j].area;
            cidades[i][j].pib_per_capita = cidades[i][j].pib / cidades[i][j].populacao;
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
            printf("Densidade Populacional: %.2f\n", cidades[i][j].densidade_populacional);
            printf("PIB per Capita: %.2f\n", cidades[i][j].pib_per_capita);
            printf("\n");
        }
    }
}

int calcularSuperPoder(Cidade cidade) {
    return cidade.populacao + cidade.area + cidade.pib + cidade.pontos_turisticos + cidade.densidade_populacional + cidade.pib_per_capita;
}

void compararCartas(Cidade cidade1, Cidade cidade2) {
    printf("Comparando cartas %s e %s:\n", cidade1.codigo, cidade2.codigo);

    printf("População: %d vs %d - ", cidade1.populacao, cidade2.populacao);
    if (cidade1.populacao > cidade2.populacao) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }

    printf("Área: %.2f vs %.2f - ", cidade1.area, cidade2.area);
    if (cidade1.area > cidade2.area) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (cidade1.area < cidade2.area) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }

    printf("PIB: %.2f vs %.2f - ", cidade1.pib, cidade2.pib);
    if (cidade1.pib > cidade2.pib) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (cidade1.pib < cidade2.pib) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }

    printf("Número de pontos turísticos: %d vs %d - ", cidade1.pontos_turisticos, cidade2.pontos_turisticos);
    if (cidade1.pontos_turisticos > cidade2.pontos_turisticos) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (cidade1.pontos_turisticos < cidade2.pontos_turisticos) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }

    printf("Densidade Populacional: %.2f vs %.2f - ", cidade1.densidade_populacional, cidade2.densidade_populacional);
    if (cidade1.densidade_populacional < cidade2.densidade_populacional) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (cidade1.densidade_populacional > cidade2.densidade_populacional) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }

    printf("PIB per Capita: %.2f vs %.2f - ", cidade1.pib_per_capita, cidade2.pib_per_capita);
    if (cidade1.pib_per_capita > cidade2.pib_per_capita) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (cidade1.pib_per_capita < cidade2.pib_per_capita) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }

    int superPoder1 = calcularSuperPoder(cidade1);
    int superPoder2 = calcularSuperPoder(cidade2);
    printf("Super Poder: %d vs %d - ", superPoder1, superPoder2);
    if (superPoder1 > superPoder2) {
        printf("Vencedor: %s\n", cidade1.codigo);
    } else if (superPoder1 < superPoder2) {
        printf("Vencedor: %s\n", cidade2.codigo);
    } else {
        printf("Empate\n");
    }
}

int main() {
    Cidade cidades[NUM_ESTADOS][NUM_CIDADES];
    cadastrarCidades(cidades);
    calcularPropriedades(cidades);
    exibirCidades(cidades);

    int estado1, cidade1, estado2, cidade2;
    printf("Digite o estado e cidade da primeira carta (ex: 0 0 para A01): ");
    scanf("%d %d", &estado1, &cidade1);
    printf("Digite o estado e cidade da segunda carta (ex: 0 1 para A02): ");
    scanf("%d %d", &estado2, &cidade2);

    compararCartas(cidades[estado1][cidade1], cidades[estado2][cidade2]);

    return 0;
}