#include <stdio.h>

// Definições constantes para o número de movimentos de cada peça
#define TORRE_MOV 5    // Número de movimentos da torre
#define BISPO_MOV 5    // Número de movimentos do bispo
#define RAINHA_MOV 8   // Número de movimentos da rainha
#define CAVALO_MOV_VERT 2 // Movimento vertical do Cavalo
#define CAVALO_MOV_HOR 1  // Movimento horizontal do Cavalo

// Função recursiva para movimento da Torre
void moverTorre(int movimentos) {
    if (movimentos <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(movimentos - 1); // Chamada recursiva
}

// Função recursiva para movimento do Bispo com loops aninhados
void moverBispo(int movimentosVert, int movimentosHor) {
    if (movimentosVert <= 0 || movimentosHor <= 0) {
        return;
    }
    for (int i = 0; i < movimentosVert; i++) {
        for (int j = 0; j < movimentosHor; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(movimentosVert - 1, movimentosHor - 1); // Chamada recursiva
}

// Função recursiva para movimento da Rainha
void moverRainha(int movimentos) {
    if (movimentos <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(movimentos - 1); // Chamada recursiva
}

// Função para movimento do Cavalo usando loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOV_VERT; i++) {
        for (int j = 0; j < CAVALO_MOV_HOR; j++) {
            if (i == 1 && j == 0) {
                printf("Cima\n");
                continue;
            }
            if (i == 1 && j == 1) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_MOV);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(BISPO_MOV, BISPO_MOV);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(RAINHA_MOV);

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}