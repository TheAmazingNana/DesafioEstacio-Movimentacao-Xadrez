#include <stdio.h>

int main() {
    // Definindo as constantes de movimento
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    printf("=== Movimentação de Peças - Xadrez ===\n\n");

    // Movimento do Bispo (Diagonal Superior Direita) - Usando FOR
    printf("Movendo o Bispo:\n");
    for (int i = 0; i < movimentoBispo; i++) {
        printf("Superior Direita\n");
    }

    // Movimento da Torre (Direita) - Usando WHILE
    printf("\nMovendo a Torre:\n");
    int t = 0;
    while (t < movimentoTorre) {
        printf("Direita\n");
        t++;
    }

    // Movimento da Rainha (Esquerda) - Usando DO-WHILE
    printf("\nMovendo a Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < movimentoRainha);

    return 0;
}