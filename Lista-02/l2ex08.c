#include <stdio.h>

void increase(int x) {
    x++;
}

void aumento(int *x) {
    (*x)++;
}

int main() {
    int numero = 10;
    
    printf("Numero original: %d\n", numero);
    
    increase(numero);
    printf("Numero original: %d\n", numero);
    //Não muda nada como esperado, já que o procedimento incrementou uma cópia da variável;
    
    aumento(&numero);
    printf("Numero original: %d\n", numero);
    //Agora retorna 11, pois o procedimento age na variável da memória indicada;
    
    return 0;
}
