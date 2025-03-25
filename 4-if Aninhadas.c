#include <stdio.h>

int idade;
float renda;

void aninhado() {
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda (menor de 2000)\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade (Menor de 18 ou Maior de 60)\n");
  }
}

void beneficio() {

  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: ");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("Você está qualificado para os benefícios sociais\n");
      } else {
        printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para os benefícios devido à idade\n");
  }
}

int main() {
    while (1 == 1) {
        //aninhado();
        beneficio();
    }
}