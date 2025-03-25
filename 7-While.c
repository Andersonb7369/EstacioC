#include <stdio.h>
 

// while (condição){
//     // bloco de código a ser executado
// }

int main() {
    int num;
   
    printf("Digite um número (negativo para sair): ");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}