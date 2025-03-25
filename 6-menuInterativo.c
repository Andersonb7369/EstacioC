#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int numerosEscolhidos[10];
int totalEscolhidos = 0;
int numeroSecreto;

void escolherNumero(int palpite, int numeroSecreto);

bool numeroJaEscolhido(int numero) {
    for (int i = 0; i < totalEscolhidos; i++) {
        if (numerosEscolhidos[i] == numero) {
            return true;
        }
    }
    return false;
}

void escolherNumero(int palpite, int numeroSecreto) {
    if (numeroJaEscolhido(palpite)) {
        printf("O numero %d ja foi usado. Por favor, escolha outro numero.\n", palpite);
    } else {
        numerosEscolhidos[totalEscolhidos++] = palpite;
        if (palpite == numeroSecreto) { // confere se o numero digitado é igual ao numero sorteado
            printf("\n---------------------------------------------\n");
            printf("CPF Cancelado, mais sorte da proxima Vez !!!\n");
            printf("\n---------------------------------------------\n");
        } else {
            printf("Dessa voce escapou, teve sorte !!\n");
        }
    }
}


int main() {
    
    int opcao;
    int numeroSecreto, palpite = 1; // setado um valor para iniciar o while

    printf("\n\n   Bem-vindo ao jogo Roleta Russa !!  \n\n");
    printf("**********    Regras do Jogo:   **********\n\n");
    printf("O jogo Roleta Russa consiste em errar \n");
    printf("errar o numero que o jogo ira sortear.\n");
    printf("O jogador deve digitar um numero e o \n");
    printf("programa informara se voce morreu ou nao.\n");
    printf("\n******************************************\n");
    printf("Menu Principal:\n\n");
    printf("1 - Jogar\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair\n\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(NULL));
            numeroSecreto = rand() % 10; // escolher um numero aleatorio entre 0 e 10


            while (palpite != numeroSecreto) { // inicia um lopping para jogar
                int escolhidos;
                printf("\nJogando...\n");
                printf("Digite um numero entre 0 e 10: ");
                scanf("%d", &palpite);
                escolherNumero(palpite, numeroSecreto);
            }
            break;
        case 2:
            printf("Regras do Jogo:\n");
            printf("O jogo Roleta Russa consiste em errar um numero entre 0 e 10.\n");
            printf("O jogador deve digitar um número e o programa informara se voce saiu vivo ou nao.\n");
            break;
        case 3:
            printf("\nSaindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
        // Pausar o programa antes de sair
    printf("\nPressione Enter para sair...");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    getchar(); // Espera o usuário pressionar Enter
}
