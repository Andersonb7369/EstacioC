#include <stdio.h> 

int main() {

    int index;

    char * nomesAlunos [3][3] = {
        {"João", "Pt: 30", "Mat: 90"},
        {"Ana", "Pt: 60", "Mat: 60"},
        {"Carlos", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno que deseja ver as notas: \n");
    printf("1 - João\n");
    printf("2 - Ana\n");
    printf("3 - Carlos\n");

    scanf("%d", &index);   

    printf("As notas do aluno %s são: %s e %s\n", nomesAlunos[index-1][0], nomesAlunos[index-1][1], nomesAlunos[index-1][2]);

    return 0;

}
