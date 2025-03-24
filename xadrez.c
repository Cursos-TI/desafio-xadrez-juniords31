#include <stdio.h>

#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Movimento do Bispo (5 casas na diagonal superior direita) usando while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");
    
    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTO_RAINHA);
    printf("\n");
    
    return 0;
}
