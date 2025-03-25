#include <stdio.h>

int main() {
    int numero, i;

    printf("\nDigite o número da tabuada que você deseja ver: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    printf("\nDeseja sair ?\n");
    printf("-------------------\n\n");
    printf("1 - Sim\n");
    printf("2 - Nao\n\n");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 2) {
        main();
    }    

    // Pausar o programa antes de sair
    printf("Pressione Enter para sair");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior

    return 0;
}