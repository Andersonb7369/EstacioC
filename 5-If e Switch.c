#include <stdio.h>

void semanaIf() {
    int dia;

    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    if (dia == 1) {
        printf("Domingo\n");
    } else if (dia == 2) {
        printf("Segunda\n");
    } else if (dia == 3) {
        printf("Terça\n");
    } else if (dia == 4) {
        printf("Quarta\n");
    } else if (dia == 5) {
        printf("Quinta\n");
    } else if (dia == 6) {
        printf("Sexta\n");
    } else if (dia == 7) {
        printf("Sábado\n");
    } else {
        printf("Dia inválido\n");
    }
}

void semanaSwitch(){
    int dia;
    printf("Digite o dia da semana: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;  
    case 3:
        printf("Terça\n");
        break; 
    case 4:
        printf("Quarta\n");
        break;  
    case 5:
        printf("Quinta\n");
        break; 
    case 6: 
        printf("Sexta\n");
        break; 
    case 7:
        printf("Sábado\n");
        break;  
    default: 
        printf("Dia inválido\n");
        break;
    }
}

int main() {
    
    while (1 == 1)
        {
            //semanaIf();
            semanaSwitch();
        }
}