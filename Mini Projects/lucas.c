#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroOculto, palpite, tentativas = 0;

    // Inicializa o gerador de numeros aleatorios
    srand(time(0));
    numeroOculto = rand() % 100 + 1; // Numero aleatorio entre 1 e 100

    printf("-----------------------------------------\n");
    printf("|   Bem-vindo ao jogo de adivinhacao!   |\n");
    printf("-----------------------------------------\n\n");
    printf("Tente adivinhar o numero oculto entre 1 e 100.\n");

    do {
        printf("\nDigite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroOculto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (palpite > numeroOculto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("\nParabens! Voce adivinhou o numero em %d tentativas.\n", tentativas);
            printf("\n\n----------------------------------------------- \n");
        }
    } while (palpite != numeroOculto);

    printf("\nDeseja jogar denovo ?\n");
    printf("----------------------\n\n");
    printf("1 - Sim\n");
    printf("2 - Nao\n\n");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        main();
    }    

    // Pausar o programa antes de sair
    printf("Pressione Enter para sair...");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    getchar(); // Espera o usuario pressionar Enter

    return 0;
}