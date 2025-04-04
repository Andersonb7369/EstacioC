#include <stdio.h>;







int main(){

    // int numero;
    // printf("Digite um numero para tabuada");
    // scanf("%d", &numero);

    for (int i = 1; i <= 10; i++){
        printf("\n\nTabuada %d", i);
        for (int j = 0; j <= 10; j++){
            printf("\n%d x %d = %d", i, j, i * j);
        }
    }

}