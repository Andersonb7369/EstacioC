#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int placarjogador = 0;
    int placarcomputador = 0;
    
    while (placarcomputador < 3 && placarjogador < 3)
    {
        int escolhaJogador, escolhaComputador;
        srand(time(0));

        printf("######    Jogo do Jokenpo   ######\n\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolhaJogador);

        int escolhacomputador = rand() % 3 + 1;

        switch (escolhaJogador) {
            case 1:
                printf("\nJogador: Pedra - ");
                break;
            case 2:
                printf("\nJogador: Papel: - ");
                break;
            case 3:
                printf("\nJogador: Tesoura: - ");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
        }

        switch (escolhacomputador) {
            case 1:
                printf("Pedra: Computador\n");
                break;
            case 2:
                printf("Papel: Computador\n");
                break;
            case 3:
                printf("Tesoura: Computador\n");
                break;
        }

        if (escolhaJogador == escolhacomputador) {
            printf("\n:| :| :|  Empate!  |: |: |:\n\n");
        } else if ((escolhaJogador == 1 && escolhacomputador == 3) || 
                    (escolhaJogador == 2 && escolhacomputador == 1) || 
                    (escolhaJogador == 3 && escolhacomputador == 2)) 
                    { printf("\n:) :) :)  Voce ganhou!  (: (: (:\n\n");
                    placarjogador ++;
        } else  {
            printf("\n): ): ):  Voce perdeu!  :( :( :(\n\n");
            placarcomputador ++;
        }
        printf("------------------------------------\n");
        printf("| Placar: Jogador %d x %d Computador |\n", placarjogador, placarcomputador);
        printf("------------------------------------\n\n");
    }
        // Pausar o programa antes de sair
    printf("Pressione Enter para sair...");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    getchar(); // Espera o usuário pressionar Enter
    return 0;
}

