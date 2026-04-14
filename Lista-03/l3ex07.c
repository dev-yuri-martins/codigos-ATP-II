#include <stdio.h>

int main() {
    int vetor[3] = {10,20,30};
    int *ponteiro = vetor;
    
    printf("Valores originais: %d %d %i\n", vetor[0], vetor[1], vetor[2]);
    
    *ponteiro = 100;
    *(ponteiro + 1) = 200;
    *(ponteiro + 2) = 300;
    
    printf("Valores alterados: %d %d %d\n", vetor[0], vetor[1], vetor[2]);
    
    return 0;
}
