#include <stdio.h>

int main(){

    int idade = 16;
    int resultado;

    // condição ? verdadeiro : falso
    idade>= 18 ? printf("Voce é maior de idade\n") : printf("Voce é menor de idade\n");
    resultado = idade>= 18 ? 1 : 2;

    printf("%d\n", resultado); // retorna o resultado inteiro

    int num1 = 70, num2 = 60;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2); // utilizando operador ternario
    printf("O numero maior é %d\n", maior);

    if (num1 > num2) { // utilizando if comum
        printf("O numero maior é %d\n", num1);
    } else {
        printf("O numero maior é %d\n", num2);
    }




}