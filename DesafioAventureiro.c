#include <stdio.h>

#define TORRE_MOV 5   // Número de movimentos da torre
#define BISPO_MOV 5   // Número de movimentos do bispo
#define RAINHA_MOV 8  // Número de movimentos da rainha
#define CAVALO_MOV_VERT 2 // Movimento vertical do Cavalo
#define CAVALO_MOV_HOR 1  // Movimento horizontal do Cavalo

int main() {
    int i, j;

    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= TORRE_MOV; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal superior direita (usando while)
    printf("\nMovimento do Bispo:\n");
    i = 1; // Inicializando a variável
    while (i <= BISPO_MOV) {
        printf("Cima, Direita\n"); // Combinação de direções para movimento diagonal
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1; // Inicializando a variável
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_MOV);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (usando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    for (i = 1; i <= CAVALO_MOV_VERT; i++) {
        printf("Baixo\n"); // Movimento vertical
    }
    j = 1; // Inicializando variável para o movimento horizontal
    while (j <= CAVALO_MOV_HOR) {
        printf("Esquerda\n"); // Movimento horizontal
        j++;
    }

    return 0;
}