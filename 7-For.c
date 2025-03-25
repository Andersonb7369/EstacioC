#include <stdio.h>

// for (inicialização; condição; incremento) {
//     // bloco de código a ser executado repetidamente
// }

// inicialização->Executada uma vez no início do loop. É geralmente usada para declarar e inicializar a variável de controle do loop.
// condição->A condição é avaliada antes de cada iteração. Se for verdadeira, o bloco de código dentro do loop é executado. Se for falsa, o loop é encerrado.
// incremento->Executado após cada iteração. É geralmente usado para incrementar ou decrementar a variável de controle do loop.

int main1() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
   
    return 0;
}

// loop for sendo usado para imprimir todos os números pares de 1 a 20.
int main() {
    for (int i = 1; i <= 20; i++) { 
        if (i % 2 == 0) {  // Nesse caso, a condição if (i % 2 == 0) verifica se i é par. Se for, o valor de i é impresso
            printf("%d\n", i);
        }
    }
   
    return 0;
}