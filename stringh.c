#include <stdio.h>
#include <string.h>
// O módulo string.h da linguagem C contém várias funções úteis para manipulação e processamento de strings (cadeias de caracteres). Aqui está uma explicação das principais funções:

// Funções para copiar e concatenar strings


// strcpy:
opia o conteúdo de uma string para outra.
// Sintaxe:
har destino[50];har origem[] = "Exemplo";
// strcpy(destino, origem); opia "Exemplo" para `destino`.
int main() {
    char origem[] = "Olá, Mundo!";
    char destino[20];
    strcpy(destino, origem);
    printf("Destino: %s\n", destino); // Saída: Destino: Olá, Mundo!
    return 0;
}


// strncpy:
opia os primeiros n caracteres de uma string para outra.
// Sintaxe:

// strncpy(destino, origem, n);
#include <stdio.h>
#include <string.h>

int main() {
    char origem[] = "Olá, Mundo!";
    char destino[20];
    strncpy(destino, origem, 5);
    destino[5] = '\0'; // Adiciona o terminador nulo manualmente
    printf("Destino: %s\n", destino); // Saída: Destino: Olá,
    return 0;
}


// strcat:
_CRT_ALIGN (adiciona) uma string ao final de outra.
// Sintaxe:

// strcat(destino, origem);  // Adiciona `origem` ao final de `destino`.
#include <stdio.h>
#include <string.h>

int main() {
    char primeira[20] = "Olá, ";
    char segunda[] = "Mundo!";
    strcat(primeira, segunda);
    printf("Resultado: %s\n", primeira); // Saída: Resultado: Olá, Mundo!
    return 0;
}


// strncat:
concatena os primeiros n caracteres de uma string ao final de outra.

// Sintaxe:

// strncat(destino, origem, n);
// Funções para comparar strings
#include <stdio.h>
#include <string.h>

int main() {
    char primeira[20] = "Olá, ";
    char segunda[] = "Mundo!";
    strncat(primeira, segunda, 3);
    printf("Resultado: %s\n", primeira); // Saída: Resultado: Olá, Mun
    return 0;
}


// strcmp:
ompara duas strings e retorna:

// 0 se forem iguais.
// Um valor negativo se a primeira for "menor".
// Um valor positivo se a primeira for "maior".
// Sintaxe:

// strcmp(string1, string2);
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "teste";
    char str2[] = "teste";
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
    return 0;
}


// strncmp:
ompara os primeiros n caracteres de duas strings.
// Sintaxe:

// strncmp(string1, string2, n);
// Funções para calcular tamanho
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "teste123";
    char str2[] = "teste456";
    if (strncmp(str1, str2, 5) == 0) {
        printf("As strings são iguais nos primeiros 5 caracteres.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
    return 0;
}


// strlen:

// Retorna o número de caracteres em uma string (excluindo o terminador nulo \0).
// Sintaxe:

// strlen(string);
// Funções para busca em strings
#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Olá, Mundo!";
    printf("Comprimento: %lu\n", strlen(texto)); // Saída: Comprimento: 12
    return 0;
}


// strchr:

// Busca a primeira ocorrência de um caractere em uma string.
// Sintaxe:

// strchr(string, 'caractere');
#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Olá, Mundo!";
    char *resultado = strchr(texto, 'M');
    if (resultado) {
        printf("Caractere encontrado em: %s\n", resultado); // Saída: Mundo!
    }
    return 0;
}


// strrchr:

// Busca a última ocorrência de um caractere em uma string.
// Sintaxe:

strrchr(string, 'caractere');


// strstr:

// Encontra a primeira ocorrência de uma substring em uma string.
// Sintaxe:

// strstr(string, substring);
// Funções para manipulação de memória
#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Olá, Mundo!";
    char *resultado = strstr(texto, "Mun");
    if (resultado) {
        printf("Substring encontrada em: %s\n", resultado); // Saída: Mundo!
    }
    return 0;
}


// memcpy:

// Copia blocos de memória (inclusive strings).
// Sintaxe:

// memcpy(destino, origem, tamanho);
#include <stdio.h>
#include <string.h>

int main() {
    char origem[] = "Cópia";
    char destino[10];
    memcpy(destino, origem, strlen(origem) + 1);
    printf("Destino: %s\n", destino); // Saída: Destino: Cópia
    return 0;
}


// Funções para busca em blocos de memória

// memset:

// Define blocos de memória com um valor específico (por exemplo, preencher com 0).
// Sintaxe:

// memset(string, valor, tamanho);
#include <stdio.h>
#include <string.h>

int main() {
    char texto[20] = "Olá, Mundo!";
    memset(texto, '*', 5);
    printf("Resultado: %s\n", texto); // Saída: Resultado: ***** Mundo!
    return 0;
}


// memchr:

// Procura um caractere em um bloco de memória.
// Sintaxe:
memchr(memoria, 'caractere', tamanho);


// memcmp:

// Compara dois blocos de memória.
// Sintaxe:
memcmp(memoria1, memoria2, tamanho);