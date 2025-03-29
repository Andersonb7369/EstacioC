// Tipos de Variáveis Primitivas


// Armazena números inteiros (positivos, negativos ou zero).

// Exemplo: int idade = 25;

int idade = 25;

printf("Idade: %d\n", idade);

// float (Ponto flutuante);

float peso = 70.5;

printf("Peso: %.2f\n", peso);  // Mostra com 2 casas decimais.


// Armazena números decimais com precisão limitada.

// Exemplo: float peso = 70.5;

// double (Ponto flutuante de precisão dupla);

double valor = 12345.6789;

printf("Valor: %.4f\n", valor);  // Mostra com 4 casas decimais.


// Armazena números decimais com maior precisão que o float.

// Exemplo: double valor = 12345.6789;

// char (Caractere):

// Armazena um único caractere.

// Exemplo: 
char inicial = 'A';

printf("Inicial: %c\n", inicial);


// Tipos de Variáveis Modificados
// Os modificadores alteram as propriedades dos tipos de dados básicos, como tamanho e sinal.

// signed e unsigned:

// signed (com sinal) permite números positivos e negativos.

// unsigned (sem sinal) permite apenas números positivos.

// Exemplo: 
unsigned int idade = 30;

printf("Idade: %u\n", idade);


// short e long:

// Usados para ajustar o tamanho de uma variável inteira.

// Exemplo: 
long int altura = 200000;

printf("Altura: %ld\n", altura);


// Outros Tipos
// void:

// Representa "nenhum valor". Geralmente usado em funções que não retornam nada.

// Exemplo: 
void minhaFuncao() {

};

// _Bool (C99):

// Tipo para valores booleanos (verdadeiro ou falso).

// Exemplo: 
_Bool ativo = 1; (1 para true, 0 para false);

_Bool ativo = 1;

printf("Ativo: %d\n", ativo);


// struct e enum:

// struct: Para agrupar diferentes tipos de variáveis em uma única estrutura. 
// Exemplo:
struct Pessoa {
    char nome[50];
    int idade;
};
struct Pessoa pessoa = {"Maria", 25};

printf("Nome: %s, Idade: %d\n", pessoa.nome, pessoa.idade);


// enum: Para criar conjuntos de constantes nomeadas. 
// Exemplo:
enum Cores {VERMELHO = 1, VERDE = 2, AZUL = 3};
enum Cores minhaCor = VERDE;

printf("Cor escolhida: %d\n", minhaCor);

