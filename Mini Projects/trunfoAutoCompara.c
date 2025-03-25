#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países

// define a quantidade de cartas por estado e a quantidade de estados
#define ESTADOS 2
#define CIDADES 2

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
typedef struct {
    char codigoCarta[4];
    char nome[50];
    int populacao;
    int area;
    int pib;
    int numeroPontosTuristicos;
} Carta;

// Função auxiliar para formatar números com pontos de milhar
void formatarNumero(int numero, char *saida) {
    char buffer[20];
    sprintf(buffer, "%d", numero);
    int len = strlen(buffer);
    int pos = 0;
    for (int i = 0; i < len; i++) {
        saida[pos++] = buffer[i];
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            saida[pos++] = '.';
        }
    }
    saida[pos] = '\0';
}

// Função para gerar um número aleatório e armazená-lo em uma variável
void gerador(int max, int *resultado) {
    do {
        *resultado = rand() % max;
    } while (*resultado == 0); // garante que nao seja zero o valor
}

// Cadastro das Cartas:
void cadastrarCarta(Carta *carta, char estado, int cidade) {

    sprintf(carta->codigoCarta, "%c%02d", estado, cidade);
    printf("Cadastrar dados da cidade %s:\n", carta->codigoCarta);
    printf("Nome da Cidade: ");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    fgets(carta->nome, sizeof(carta->nome), stdin);
    carta->nome[strcspn(carta->nome, "\n")] = 0; // Remover o caractere de nova linha

    // printf("População: ");
    // scanf("%d", &carta->populacao);
    gerador(100000, &carta->populacao); // Preenche Aleatoriamente

    // printf("Área (km²): ");
    // scanf("%d", &carta->area);
    gerador(500000, &carta->area); // Preenche Aleatoriamente

    // printf("PIB (milhões): ");
    // scanf("%d", &carta->pib);
    gerador(1000, &carta->pib); // Preenche Aleatoriamente

    // printf("Número de pontos turísticos: ");
    // scanf("%d", &carta->numeroPontosTuristicos);
    gerador(100, &carta->numeroPontosTuristicos); // Preenche Aleatoriamente
}

// Exibição dos Dados das Cartas:
void exibirCartas(Carta cartas[ESTADOS][CIDADES]) {
    printf("\nCartas cadastradas:\n");
    for (char estado = 'A'; estado < 'A' + ESTADOS; estado++) {
        for (int cidade = 1; cidade <= CIDADES; cidade++) {
            Carta carta = cartas[estado - 'A'][cidade - 1];

            printf("\n\n################ SUPER TRUNFO ################\n");
            printf("################    CARTA %c%d  ################\n\n", estado, cidade);

            printf("Codigo da Carta: %s\n", carta.codigoCarta);
            printf("Nome: %s\n", carta.nome);

            char populacaoFormatada[20];
            formatarNumero(carta.populacao, populacaoFormatada);
            printf("População: %s\n", populacaoFormatada);
            
            char areaFormatada[20];
            formatarNumero(carta.area, areaFormatada);
            printf("Área total: %s km²\n", areaFormatada);

            char pibFormatado[20];
            formatarNumero(carta.pib, pibFormatado);
            printf("PIB: %s milhões\n", pibFormatado);

            char pontosTuristicosFormatado[20];
            formatarNumero(carta.numeroPontosTuristicos, pontosTuristicosFormatado);
            printf("Número de Pontos Turísticos: %s\n", pontosTuristicosFormatado);

            printf("\n#############   Fim da CARTA %c%d   #############\n", estado, cidade);

        }
    }
}

// Inicio da execução do programa
int main() {

    Carta cartas[ESTADOS][CIDADES];

    // inicia o cadastro das cartas
    for (char estado = 'A'; estado < 'A' + ESTADOS; estado++) {
        for (int cidade = 1; cidade <= CIDADES; cidade++) {
            cadastrarCarta(&cartas[estado - 'A'][cidade - 1], estado, cidade);
        }
    }

    // exibe todas as cartas na tela
    //exibirCartas(cartas);


//exibe a carta 1
    Carta carta = cartas[0][0];

    printf("Codigo da Carta: %s\n", carta.codigoCarta);
    printf("Nome: %s\n", carta.nome);

    char populacaoFormatada[20];
    formatarNumero(carta.populacao, populacaoFormatada);
    printf("População: %s\n", populacaoFormatada);
    
    char areaFormatada[20];
    formatarNumero(carta.area, areaFormatada);
    printf("Área total: %s km²\n", areaFormatada);

    char pibFormatado[20];
    formatarNumero(carta.pib, pibFormatado);
    printf("PIB: %s milhões\n", pibFormatado);

    char pontosTuristicosFormatado[20];
    formatarNumero(carta.numeroPontosTuristicos, pontosTuristicosFormatado);
    printf("Número de Pontos Turísticos: %s\n", pontosTuristicosFormatado);




// escolha uma carta
    

// Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);





    // Pausar o programa antes de sair
    printf("Pressione Enter para sair...");
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior
    getchar(); // Espera o usuário pressionar Enter

    return 0;
}