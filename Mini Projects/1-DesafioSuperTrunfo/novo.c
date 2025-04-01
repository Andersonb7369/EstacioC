#include <stdio.h>

// função int retorna algo
int compara(int numero1, int numero2){
    if (numero1 > numero2){
        printf("Numero 1 (%d) é maior do que o numero 2 (%d)\n", numero1, numero2);
    } else if (numero1 < numero2) {
        printf("Numero 2 (%d) é maior do que o numero 1 (%d)\n", numero2, numero1);
    } else {
        printf("Os numeros são iguais\n");
    }
    return 0;
}

// função int retorna algo
int compararr(int numero1, int numero2){
    if (numero1 > numero2){
        return 1;
    } else if (numero1 < numero2) {
        return -1;   
    } else if (numero1 = numero2) {
        return 2;
    }
    return 0;
}

// função void nao tem retorno de valores
void comparar(int numero1, int numero2){
    if (numero1 > numero2){
        printf("Numero 1 (%d) é maior do que o numero 2 (%d)\n", numero1, numero2);
    } else if (numero1 < numero2) {
        printf("Numero 2 (%d) é maior do que o numero 1 (%d)\n", numero2, numero1);
    } else {
        printf("Os numeros são iguais\n");
    }
}



int main() {
    // fixa os valores das variaveis
    int numero1 = 10;
    int numero2 = 25;

    // solicita os valores para o usuario
    printf("Digite 2 numeros com espaço entre eles: ");
    scanf("%d %d", &numero1, &numero2);

    compara(numero1, numero2);
    comparar(numero1, numero2);

    int resultado = compararr(numero1, numero2);
    printf("Resultado: %d\n", resultado);

    if (resultado = 1){
        printf("Numero 1 (%d) é maior do que o numero 2 (%d)\n", numero1, numero2);
    } else if (resultado = -1) {
        printf("Numero 2 (%d) é maior do que o numero 1 (%d)\n", numero2, numero1);
    } else {
        printf("Os numeros são iguais\n");
    }


    //compara quem é o numero maior
    // if (numero1 > numero2){
    //     printf("Numero 1 (%d) é maior do que o numero 2 (%d)", numero1, numero2);
    // } else {
    //     printf("Numero 2 (%d) é maior do que o numero 1 (%d)", numero2, numero1);
    // }

    return 0;
}