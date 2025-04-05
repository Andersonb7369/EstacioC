#include <stdio.h>

int main(){

    int matriz[5][5] = {
        {0, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
 
    };

    int l, c;
    int ln = 0, cl = 0;
    
    for (l = 0; l < 5; l++){  // imprime a matriz inicial na tela
        for (int c = 0; c < 5; c++){
            printf("%d  ", matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\n");

          
    for (l = 0; l < 4; l++){
        matriz[l][l] = 1; // altera a casa atual para 1 a cada loop
        matriz[l+1][l+1] = 0; // altera a proxima casa para 0 a cada loop
        for (int l = 0; l < 5; l++){  // imprime novamente a Matriz tela
            for (int c = 0; c < 5; c++){
                printf("%d  ", matriz[l][c]);
            }
            printf("\n");
        }
        printf("\n");

    }
    
    
    // for (int l = 0; l < 5; l++){
    //     for (int c = 0; c < 5; c++){
    //         printf("%d  ", matriz[l][c]);
    //     }
    //     printf("\n");
    // }
    

    return 0;
}
