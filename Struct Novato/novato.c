#include <stdio.h>

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[5]; // Array para armazenar os 5 territórios

    printf("\n=============================================\n");

    for (int i = 0; i < 5; i++) {
        printf("\n--- Cadastrando Território %d ---\n", i + 1);

        printf("Nome do Território: ");
        scanf("%s", territorios[i].nome);

        printf("Cor do Exército: ");
        scanf("%s", territorios[i].cor);

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    printf("\n============================================\n");
    printf("       MAPA DO MUNDO - ESTADO ATUAL         \n");
    printf("============================================\n");

    for (int i = 0; i < 5; i++) {
        printf("TERRITÓRIO %d\n", i + 1);
        printf("- Nome: %s\n", territorios[i].nome);
        printf("- Dominado por: Exército %s\n", territorios[i].cor);
        printf("- Tropas: %d\n", territorios[i].tropas);
        printf("--------------------------------------------\n");
    }

    return 0;
}
