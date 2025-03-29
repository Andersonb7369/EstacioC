#include <stdio.h>

int main() {

int a, b;
int soma, subtrair, multiplica, divide;
int soma1, soma2, resultado, resultado1;

    a = 5;
    b = 3;
// operadores
    soma = a + b;
    subtrair = a - b;
    multiplica = a * b;
    multiplica *= a;             // multiplica a variavel por "a"
    divide = a / b;
    divide /= a;                 // divide a variavel por "a"

// incremento
    soma1 = soma++;              // incrementa 1 ao numero
    soma1 += soma;               // atribui com incremento
    soma2 = soma--;              // decremneta 1 ao numero
    soma2 -= soma;               // atribui com decremento
  
// pre e pós-incremento
    printf("\nAntes: %d\n", soma1);
    
    resultado = soma1++;        // incrementa 1 a soma depois de atribuir a Resultado
    printf("Resultado: %d \n", resultado);
    printf("Depois: %d \n", soma1);
    
    resultado1 = ++soma1;        // incrementa 1 a soma depois de atribuir a Resultado
    
    printf("Pré: %d \n", soma1);
    printf("Resultado: %d \n", resultado1);

// prints
    printf("-------------------------\n");
    
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtrair);
    printf("A multiplicação é: %d\n", multiplica);
    printf("A divisao é: %d\n", divide);
    printf("A soma1 é: %d\n", soma1);
    printf("A soma2 é: %d\n", soma2);
}