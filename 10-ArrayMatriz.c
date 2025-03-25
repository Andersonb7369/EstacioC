


// // arrays/vetor armazenam valores de um mesmo tipo
// // acessiveis por um índice
// int numeros[5] = {10, 20, 30, 40, 50};
// char *nomes[3] = {"Alice", "Bob", "Charlie"};

// // matriz é um array de arrays
// // é essencialmente uma tabela ou grade de valores em que cada elemento é 
// // acessado por dois índices: um para a linha e outro para a coluna
// int matriz[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// int main() {
//     // acessando elementos de um array
//     printf("Primeiro elemento do array de números: %d\n", numeros[0]);
//     printf("Segundo elemento do array de números: %d\n", numeros[1]);
//     printf("Terceiro elemento do array de números: %d\n", numeros[2]);
//     printf("Quarto elemento do array de números: %d\n", numeros[3]);
//     printf("Quinto elemento do array de números: %d\n", numeros[4]);

//     // acessando elementos de uma matriz
//     printf("Elemento na linha 1, coluna 1 da matriz: %d\n", matriz[0][0]);
//     printf("Elemento na linha 2, coluna 2 da matriz: %d\n", matriz[1][1]);
//     printf("Elemento na linha 3, coluna 3 da matriz: %d\n", matriz[2][2]);

//     return 0;
// }

#include <stdio.h>
 
int main1() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    // Acessando e imprimindo elementos específicos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
    printf("O elemento na posição [2][2] é %d\n", matriz[2][2]);
}

int main() {
    int matriz[3][3];  // Declaração de uma matriz 3x3 de inteiros
 
    // Inicializando os elementos da matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
 
    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n\n", matriz[1][1]);

    main1();
    printf("\n{1, 2, 3}");
    printf("\n{4, 5, 6}");
    printf("\n{7, 8, 9}\n");

    return 0;
}
