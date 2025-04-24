#include <stdio.h>

int main() {
    
    int casasBaixo = 2;
    int casasEsquerda = 1;

   
    printf("Movimento do Cavalo:\n");

    
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

   
    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++; 
    }

    
    printf("\n");

   
    return 0;
}