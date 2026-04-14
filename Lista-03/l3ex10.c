#include <stdio.h> 

int main() {
    int vetor[3] = {3,4,5};
    int *ponteiro = vetor;
    int *ptr = vetor;
    
    //Usando mais de um ponteiro, como pede o exercício;
    
    printf("Valores originais: %d %d %d\n", vetor[0], vetor [1], vetor[2]);
    
    *ponteiro = 9;
    *(ptr + 1) = 16;
    *(ptr + 2) = 25;
    
    printf("Valores ao quadrado: %d %d %d\n", vetor[0], vetor[1], vetor[2]);
    
    return 0;
} 
