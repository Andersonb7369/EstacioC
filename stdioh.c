Funções de Entrada e Saída.

printf:

Exibe texto formatado no console (saída padrão).
Exemplo: 
printf("Olá, Mundo!\n");

scanf:

Lê entrada do usuário formatada.
Exemplo: 
scanf("%d", &variavel);

putchar:

Escreve um único caractere no console.
Exemplo: 
putchar('A');

getchar:

Lê um único caractere do console.
Exemplo: 
char c = getchar();

puts:

Exibe uma string no console, adicionando uma nova linha no final.
Exemplo: 
puts("Texto de exemplo!");

gets (não recomendada):

Lê uma string do console (insegura, por risco de estouro de buffer).
Substituída em implementações modernas pelo fgets.


Funções para Manipulação de Arquivos

fopen:

Abre um arquivo para leitura, escrita ou ambos.
Exemplo: 
FILE *arquivo = fopen("arquivo.txt", "r");

fclose:

Fecha um arquivo aberto.
Exemplo: 
fclose(arquivo);

fgetc:

Lê um caractere de um arquivo.
Exemplo: 
char c = fgetc(arquivo);

fputc:

Escreve um caractere em um arquivo.
Exemplo: 
fputc('A', arquivo);

fgets:

Lê uma linha de um arquivo.
Exemplo: 
fgets(buffer, tamanho, arquivo);

A função fgets permite capturar toda a linha de entrada, incluindo espaços, até encontrar o caractere de 
nova linha (\n) ou até atingir o tamanho máximo especificado.

Exemplo:
fgets(string, sizeof(string), stdin):

#include <stdio.h>

int main() {
    char string[100]; // Define o tamanho máximo da string

    printf("Digite uma string com espaços: ");
    fgets(string, sizeof(string), stdin); // Lê a linha de entrada do teclado

    printf("Você digitou: %s", string); // Exibe a string lida
    return 0;
}

A função fgets inclui o caractere de nova linha (\n) no final da string, caso o usuário pressione "Enter". 
Se você quiser remover o \n, pode usar a seguinte lógica
string[strcspn(string, "\n")] = '\0'; // Remove o caractere de nova linha


fputs:

Escreve uma string em um arquivo.
Exemplo: 
fputs("Texto no arquivo", arquivo);

fread:

Lê blocos de dados binários de um arquivo.
Exemplo: 
fread(buffer, tamanho, quantidade, arquivo);

fwrite:

Escreve blocos de dados binários em um arquivo.
Exemplo: 
fwrite(buffer, tamanho, quantidade, arquivo);

fprintf:

Escreve texto formatado em um arquivo.
Exemplo: 
fprintf(arquivo, "Valor: %d\n", valor);

fscanf:

Lê dados formatados de um arquivo.
Exemplo: 
fscanf(arquivo, "%d", &variavel);


Funções de Posição e Verificação

ftell:

Retorna a posição atual no arquivo.
Exemplo: 
long posicao = ftell(arquivo);

fseek:

Move o ponteiro para uma posição específica no arquivo.
Exemplo: 
fseek(arquivo, 0, SEEK_SET);

rewind:

Move o ponteiro para o início do arquivo.
Exemplo: 
rewind(arquivo);

feof:

Verifica se o fim do arquivo foi alcançado.
Exemplo: 
if (feof(arquivo)) { /* fim do arquivo */ }

ferror:

Verifica se ocorreu um erro no arquivo.
Exemplo: if (ferror(arquivo)) { /* erro */ }


Funções de Buffer

setbuf:

Define ou desabilita o buffer de um arquivo.
Exemplo: 
setbuf(arquivo, buffer);

setvbuf:

Define o tipo de buffer para um arquivo.
Exemplo: 
setvbuf(arquivo, buffer, _IOFBF, tamanho);