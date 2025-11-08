#include <stdio.h>

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;


int main() {
    Territorio territorio = {nome, cor, tropas};

    printf("=============================================");

    for (int i = 0; i < 5; i++) {
        printf("--- Cadastrando Território %d ---", i);

        printf("Nome do Território: ");
        scanf("%u", &nome);

        printf("Cor d Excercito: ");
        scanf("%u", &cor);

        printf("Numero de Tropas: ");
        scanf("%u", &tropas);


    }
    
    for (int i = 0; i < 5; i++) {
        printf ("\n============================================");
        printf ("       MAPA DO MUNDO - ESTADO ATUAL         ");
        printf ("============================================\n");
        printf ("TERRITORIO %d", i);
        printf ("- Nome: %d\n", territorio.nome);
        printf ("- Dominado por: Exercicito %d\n", territorio.cor);
        printf ("- Tropas: %d\n", territorio.tropas);

    }
    

}
