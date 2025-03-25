#include <stdio.h>

/*
O desafio é controlar 3 condições de segurança
-temperatura
-umidade
-nivel de estoque
*/

int main() {

    int temperatura, umidade;
    unsigned int estoque, estoqueMin;

    printf("Entre com a Temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a Umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o Estoque: \n");
    scanf("%u", &estoque);

    if ( temperatura > 30) {
        printf("A temperatura está alta\n");
    } else {
        printf("A temeratura está normal\n");
    }

    if ( umidade > 50) {
        printf("Umidade Elevada\n");
    } else {
        printf("Umidade Normal\n");
    }

    if ( estoque < estoqueMin) {
        printf("Estoque abaixo do Minimo");
    } else {
        printf("Estoque normal");
    }


}

