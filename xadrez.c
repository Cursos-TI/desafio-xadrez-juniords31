#include <stdio.h>

#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO_VERTICAL 2
#define MOVIMENTO_CAVALO_HORIZONTAL 1

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
    
    // Movimento do Cavalo (2 casas para baixo, 1 para a esquerda) usando loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int m = 0; m < MOVIMENTO_CAVALO_VERTICAL; m++) {
        printf("Baixo\n");
    }
    int n = 0;
    while (n < MOVIMENTO_CAVALO_HORIZONTAL) {
        printf("Esquerda\n");
        n++;
    }
    printf("\n");
    
    return 0;
}
