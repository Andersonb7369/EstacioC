#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_QUESTIONS 8
#define TIME_LIMIT 7

void generate_question(int *a, int *b) {
    *a = rand() % 10 + 1;
    *b = rand() % 10 + 1;
}

int main() {
    int a, b, answer, correct = 0;
    time_t start, end;

    srand(time(NULL));
    printf("---------------------------------\n");
    printf("| Bem-vindo ao jogo da tabuada! |\n");
    printf("---------------------------------\n");
    printf("Voce tem %d segundos para responder cada pergunta.\n\n", TIME_LIMIT);
    printf("Pressione Enter para comecar\n\n");
    getchar(); 


    for (int i = 0; i < NUM_QUESTIONS; i++) {
        generate_question(&a, &b);
        printf("Quanto e %d x %d? ", a, b);

        start = time(NULL);
        scanf("%d", &answer);
        end = time(NULL);

        if (difftime(end, start) > TIME_LIMIT) {
            printf(" --> Tempo esgotado!\n\n");
        } else if (answer == a * b) {
            printf(" --> Correto!\n\n");
            correct++;
        } else {
            printf(" :( -->  Errado. A resposta correta e %d.\n\n", a * b);
        }
    }

    printf("\nVoce acertou %d de %d perguntas.\n\n", correct, NUM_QUESTIONS);
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
    printf("Pressione Enter para sair");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    //getchar(); // Espera o usuário pressionar Enter
    return 0;
}