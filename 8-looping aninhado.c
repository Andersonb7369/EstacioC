#include <stdio.h>

// tabuada de 1 a 10
int mainFor() {
    for (int i=1; i<=10; i++){ // primeiro executa o 1
        printf("\nExecutando a tabuada do %d\n", i); // imprime a tabuada do 1 ao 10
        for (int j = 1; j <= 10; j++) {  // segundo itera de 1 a 10 para o 1 de i acima
            printf("%d x %d = %d\n", i, j, i * j); // imprime a tabuada de 1 a 10
        }
    }
}

int mainMix() {
    int i = 1;  // inicializa a variável de controle do loop externo em 1
    do {
        int j = 1; // inicializa a variável de controle do loop interno em 1
        do {
            printf("%d\t", i * j); // imprime o produto de i e j na mesma linha com tabulação
            j++;
        } while (j <= 10); // loop interno
        printf("\n");
        i++;
    } while (i <= 10);  // loop externo
    return 0;
}

int mainWhile() {
    int i = 1; // inicializa a variável de controle do loop em 1   
    while (i <= 10) { // loop externo
        int j = 1; //initializa a variável de controle do loop em 1
        while (j <= 10) {  // loop interno
            printf("%d\t", i * j); // imprime o produto de i e j na mesma linha com tabulação
            j++; // incrementa j
        }
        printf("\n"); // imprime uma nova linha
        i++; // incrementa i
    }
    return 0;
}

int mainPadrao() {
    int n = 10; // altura do triângulo
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int mainFogos() {
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
}

int main() {
    //mainFor();
    //mainWhile();
    //mainMix();
    //mainPadrao();
    mainFogos();
    return 0;
}