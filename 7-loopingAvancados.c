#include <stdio.h>
 

// multiplas variaveis de controle
int mainVar() {
    for (int i = 0, j = 10; i < j; i++, j--) { //cada variavel separada por virgula
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}

// multiplas variaveis e condicoes
int mainCond() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}

// Atualizações complexas
int mainTernario() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) { // usando operador ternario
        printf("%d ", i);
    }
    return 0;
}


// usando break e continue
int mainBreak() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break;    // Sai do loop quando i é 8
        printf("%d ", i);
    }
    return 0;
}


int main() {
    //mainVar();
    //mainCond();
    //mainTernario();
    mainBreak();
    return 0;
}