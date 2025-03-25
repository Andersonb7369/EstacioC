#include <stdio.h>

#define LINHAS 5    // Definindo o número de linhas
#define COLUNAS 5   // Definindo o número de colunas

int main()
{
    int matriz[LINHAS][COLUNAS] = { {1, 2}, {3, 4} }; // Matriz constante
    
    int soma = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
            // soma += matriz[i][j];
            // printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}