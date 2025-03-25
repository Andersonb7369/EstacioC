#include <stdio.h>


void notas(int nota){

    if (nota >= 90) {
        printf("nota A\n");
    } else if (nota >= 80) {
        printf("nota B\n");
    } else if (nota >= 70) {
        printf("nota C\n");
    } else if (nota >= 60) {
        printf("nota D\n");
    } else if (nota >= 50) {
        printf("nota E\n");
    } else {
        printf("nota F\n");
    }
}

int main() {

int nota = 51;

while (nota >= 50){

    printf("Digite a nota: ");
    scanf("%d", &nota);

    notas(nota);
}

}