#include <stdio.h>

int cont;

void contador() {
    while (cont <=20 ) {
        int menor = cont;
            printf("menor: %d\n", menor);
        cont++;
    }
}

void precedencia1() {
    int a = 5;
    int b = 10;
    int c = 0;

    if (a > 0 && b < 0 || c == 0) { //&& porta E || porta OU
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }
}

void precedencia2() {
    int idade = 20;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada\n");
    } else {
        printf("Você não atende aos critérios\n");
    }
}

void temp() {
    float temperatura = 25.0;
    float umidade = 55.0;

    if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
        printf("As condições estão favoráveis\n");
    } else {
        printf("As condições não estão favoráveis\n");
    }
}

int main() {

//contador();
//precedencia1();
//precedencia2();
temp();

    return 0;

}