#include <stdio.h>

// É um conceito importante em programação, em que uma 
// função chama a si mesma para resolver problemas de forma mais simples e eficiente.
// Função recursiva para imprimir números de n até 1

void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}


//  Quando recursiveLoop(5) é chamado, a sequência de execuções é:

// recursiveLoop(5) imprime 5 e chama recursiveLoop(4).
// recursiveLoop(4) imprime 4 e chama recursiveLoop(3).
// recursiveLoop(3) imprime 3 e chama recursiveLoop(2).
// recursiveLoop(2) imprime 2 e chama recursiveLoop(1).
// recursiveLoop(1) imprime 1 e chama recursiveLoop(0).
// recursiveLoop(0) não entra no if e a execução termina.