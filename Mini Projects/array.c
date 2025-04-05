#include <stdio.h>



void main1(){

    char *nomes[] = {"Anderson", "Amanda", "Lucas", "Leticia", "Fatima", "Expedito", "Fagner"};

    // sizeof(nomes) - retorna o tamanho total do vetor (em bytes), que, no caso de um vetor de ponteiros, corresponde ao número de ponteiros armazenados.
    // sizeof(nomes[0]) - retorna o tamanho de um único ponteiro para char (pois cada elemento do vetor é um ponteiro para uma string)
    int tamanho = sizeof(nomes) / sizeof(nomes[0]); // O mesmo princípio se aplica!
    printf("\nTamanho do Vetor: %d\n", tamanho);

    for (int i = 0; i < (sizeof(nomes) / sizeof(nomes[0])); i++){
        printf("\nNome %d: %s", i+1, nomes[i]);
    }
    printf("\n");
    
}

int main(){

    int idades[] = {1, 2, 3, 4, 5, 6, 2, 9, 8};

    // sizeof(idades) - retorna o tamanho total do vetor em bytes.
    // sizeof(idades[0]) - retorna o tamanho de um único elemento do vetor (neste caso, um int).
    int tamanho = sizeof(idades) / sizeof(idades[0]);
    printf("\nTamanho do vetor: %d\n", tamanho);


    for (int i = 0; i < (sizeof(idades) / sizeof(idades[0])); i++){
        printf("\nNumero %d: %d", i+1, idades[i]);
    }
    printf("\n");
    main1();

    return 0;
}
