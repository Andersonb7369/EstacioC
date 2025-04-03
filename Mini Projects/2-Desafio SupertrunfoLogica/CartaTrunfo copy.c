#include <stdio.h>
#include <string.h>

#define ESTADOS 1
#define CIDADES 2

typedef struct {
    int numeroCarta;
    char estado;
    char codigo[4];
    char nomeCidade[25];
    int populacao;
    float area;
    float pib;
    int pontosTurusticos;
    float densidade;
    float pibPercapita;
    float superPoder;
} Trunfo;

typedef struct {
    int Cartas[6];
} Cartas;

// função cadastrar carta
void cadastrar(Trunfo cartaTrunfo[ESTADOS][CIDADES]) {
    char estados[] = "ABCDEFGH"; // cria as letras das cartas(estados)
    int ncarta = 1;
    for (int e = 0; e < ESTADOS; e++ ){  
        for (int c = 0; c < CIDADES; c++){  // itera sobre os estados e cartaTrunfo gerando o codigo da carta'
            
            cartaTrunfo[e][c].numeroCarta = ncarta;
            cartaTrunfo[e][c].estado = estados[e];

            printf("Codigo %c%02d:\n", estados[e], c + 1);
            sprintf(cartaTrunfo[e][c].codigo, "%c%02d", estados[e], c + 1);

            printf("Nome da Cidade: ");
            scanf("%s", &cartaTrunfo[e][c].nomeCidade); // aceita apenas nomes sem espaços

            // fgets(cartaTrunfo[e][c].nomeCidade, sizeof(cartaTrunfo[e][c].nomeCidade), stdin); //captura nome com espaço
            // cartaTrunfo[e][c].nomeCidade[strcspn(cartaTrunfo[e][c].nomeCidade, "\n")] = '\0'; //remove o \n do final da linha
            
            printf("População: ");
            scanf("%d", &cartaTrunfo[e][c].populacao);

            printf("Área Mt2: ");
            scanf("%f", &cartaTrunfo[e][c].area);

            printf("PIB (milhoes): ");
            scanf("%f", &cartaTrunfo[e][c].pib);

            printf("Número de pontos turísticos: ");
            scanf("%d", &cartaTrunfo[e][c].pontosTurusticos);

            // calcula a densodade e armazena na variavel
            cartaTrunfo[e][c].densidade = cartaTrunfo[e][c].populacao / cartaTrunfo[e][c].area;
            // calcula o pibPercapta
            cartaTrunfo[e][c].pibPercapita = (cartaTrunfo[e][c].pib * 1000)/ cartaTrunfo[e][c].populacao;
            // calcula o super poder
            cartaTrunfo[e][c].superPoder =  cartaTrunfo[e][c].populacao + 
                                            cartaTrunfo[e][c].area +
                                            cartaTrunfo[e][c].pib * 1000 +
                                            cartaTrunfo[e][c].pontosTurusticos +
                                            cartaTrunfo[e][c].pibPercapita -
                                            cartaTrunfo[e][c].densidade;            
            printf("\n");
            ncarta++;
        }
    }
}



void exibirCartas(Trunfo cartaTrunfo[ESTADOS][CIDADES]){
    for (int e = 0; e < ESTADOS; e++ ){  
        for (int c = 0; c < CIDADES; c++){
            printf("\nCarta %d:\n", cartaTrunfo[e][c].numeroCarta);
            printf("Estado: %c\n", cartaTrunfo[e][c].estado);
            printf("Codigo: %s\n", cartaTrunfo[e][c].codigo);
            printf("Nome da Cidade: %s\n", cartaTrunfo[e][c].nomeCidade);
            printf("População: %d\n", cartaTrunfo[e][c].populacao);
            printf("Área: %.2f Km2\n", cartaTrunfo[e][c].area);
            printf("PIB: %.2f bilhoes de reais\n", cartaTrunfo[e][c].pib/1000);
            printf("Pontos Tur: %d\n", cartaTrunfo[e][c].pontosTurusticos);
            printf("Densidade: %.2f hab/km2\n", cartaTrunfo[e][c].densidade);
            printf("Pib PerCapita: %.2f reais\n", cartaTrunfo[e][c].pibPercapita);
            printf("Super poder: %.0f\n\n", cartaTrunfo[e][c].superPoder);
            printf("--------------------------------------------------");
            
        }
    }
}


// comparar cartas
void compararCartas(Trunfo carta1, Trunfo carta2) {
    int populacao1 = carta1.populacao;
    int populacao2 = carta2.populacao;
    int area1 = carta1.area;
    int area2 = carta2.area;
    int pib1 = carta1.pib;
    int pib2 = carta2.pib;
    int pontoTur1 = carta1.pontosTurusticos;
    int pontoTur2 = carta2.pontosTurusticos;
    int densidade1 = carta1.densidade;
    int densidade2 = carta2.densidade;
    int pibPerCapta1 = carta1.pibPercapita;
    int pibPerCapta2 = carta2.pibPercapita;
    int superPoder1 = carta1.superPoder;
    int superPoder2 = carta2.superPoder;

    printf("\nComparando cartas: %s e %s\n\n", carta1.codigo, carta2.codigo);

    int escolha1, escolha2;

    printf("\n***  Atributos  ***\n\n");
    printf("1 > População\n");
    printf("2 > Area\n");
    printf("3 > PIB\n");
    printf("4 > Pontos Turisticos\n");
    printf("5 > Densidade Demog.\n");
    printf("6 > PIB PerCapta\n");
    printf("7 > Super Poder\n");
    printf("-----------------------\n\n");
    
    printf("\nEscolha o numero de 2 atributos acima para comparar: ");
    printf("\nEscolha o primeiro: ");
    scanf("%d", &escolha1);
    printf("\nEscolha o segundo: ");
    scanf("%d", &escolha2);

      

    switch (escolha1)
    {
    case 1:
        /* code */
        populacao1 > populacao2 ? 1 : 2;
        
        if (populacao1 > populacao2){
            printf("População: Carta 1 Venceu");
        } else if (populacao1 < populacao2) {
            printf("População: Carta 2 Venceu");
        } else {
            printf("População: Empate");
        }
        break;
    case 2:
        /* code */
        if (area1 > area2) {
            printf("\nÁrea: Carta 1 Venceu");
        } else if (area1 < area2) {
            printf("\nÁrea: Carta 2 Venceu");
        } else {
            printf("\nÁrea: Empate");
        }
        break;
    case 3:
        /* code */
        if (pib1 > pib2) {
            printf("\nPIB: Carta 1 Venceu");
        } else if (pib1 < pib2) {
            printf("\nPIB: Carta 2 Venceu");
        } else {
            printf("\nPIB: Empate");
        }
        break;
    case 4:
        /* code */
        if (pontoTur1 > pontoTur2) {
            printf("\nPontos Turísticos: Carta 1 Venceu");
        } else if (pontoTur1 < pontoTur2) {
            printf("\nPontos Turísticos: Carta 2 Venceu");
        } else {
            printf("\nPontos Turísticos: Empate");
        }
    
        break;
    case 5:
        /* code */
        if (densidade1 > densidade2) {
            printf("\nDensidade: Carta 1 Venceu");
        } else if (densidade1 < densidade2) {
            printf("\nDensidade: Carta 2 Venceu");
        } else {
            printf("\nDensidade: Empate");
        }
        break;
    case 6:
        /* code */
        if (pibPerCapta1 < pibPerCapta2) {
            printf("\nPIB Per Capita: Carta 1 Venceu");
        } else if (pibPerCapta1 > pibPerCapta2) {
            printf("\nPIB Per Capita: Carta 2 Venceu");
        } else {
            printf("\nPIB Per Capita: Empate");
        }
        break;
    case 7:
        /* code */
        if (superPoder1 > superPoder2) {
            printf("\nSuper Poder: Carta 1 Venceu");
        } else if (superPoder1 < superPoder2) {
            printf("\nSuper Poder: Carta 2 Venceu");
        } else {
            printf("\nSuper Poder: Empate");
        }
        break;
    default:

        break;
    }


}


int main() {
    Trunfo cartaTrunfo[ESTADOS][CIDADES];
    cadastrar(cartaTrunfo);
    exibirCartas(cartaTrunfo);

    // solicitando as cartas ao Usuario e armazenando em variaveis
    int carta11, carta12, carta21, carta22;
    printf("\n\nDigite o numero da primeira carta (para A01 digite 0 1): ");
    scanf("%d %d", &carta11, &carta12);
    printf("\n\nDigite o numero da segunda carta (para A01 digite 0 2): ");
    scanf("%d %d", &carta21, &carta22);

    // Chamando a função para comparar as cartas
    compararCartas(cartaTrunfo[carta11][carta12], cartaTrunfo[carta21][carta22]);
}




