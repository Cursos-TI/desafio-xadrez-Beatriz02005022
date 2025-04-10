#include <stdio.h>

#define TORRE_MOV 5 // Número de movimentos da torre
#define BISPO_MOV 5 // Número de movimentos do bispo
#define RAINHA_MOV 8 // Número de movimentos da rainha

int main() {
    int i;

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

    return 0;
}