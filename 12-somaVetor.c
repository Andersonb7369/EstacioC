#include <stdio.h>
 
int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int soma = 0;
 
    // Calculando a soma dos elementos do vetor
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
 
    printf("A soma dos elementos do vetor é: %d\n", soma);
    
    // equivalente ao for acima
    int i = 0;
    if (i < 5) {
        soma += vetor [i];
    };
    printf("%d\n", soma);

    return 0;
};