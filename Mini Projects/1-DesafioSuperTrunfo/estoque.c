#include <stdio.h>

int main() {

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.50;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    // exibir as informações dos produtos

    printf("Produto %s tem estoque de %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque de %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    // comparações com o valor minimo de estoque

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo de %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo de %d\n", produtoB, resultadoB);


    // comparações entre os valores totais dos produtos

    printf("Valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %.d\n",
        valorA * estoqueA, 
        valorB * estoqueB, 
        (estoqueA * valorA) > (estoqueB * valorB) 
    );

}