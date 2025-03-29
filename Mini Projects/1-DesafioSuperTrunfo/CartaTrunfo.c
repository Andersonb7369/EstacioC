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


// comparar cartas
void compararCartas(Trunfo cartaTrunfo[ESTADOS][CIDADES]){
    // for (int e = 0; e < ESTADOS; e++ ){  
    //     for (int c = 0; c < CIDADES; c++){
    //         Cartas carta;
    //         carta.Cartas = cartaTrunfo[e][c].numeroCarta;
    //         printf("\nCarta %d", carta.Cartas);
       
    //     }
    // }
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


int main() {
    Trunfo cartaTrunfo[ESTADOS][CIDADES];
    cadastrar(cartaTrunfo);
    exibirCartas(cartaTrunfo);
    // compararCartas(cartaTrunfo);
}




