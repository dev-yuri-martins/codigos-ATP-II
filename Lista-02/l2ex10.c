#include <stdio.h>

int dobra(int *a) {
    return *a * 2;
}

void soma (int *a) {
      *a += 10;
}

int main() {
    int x; 
    scanf(" %d", &x);
    printf("Numero original: %d\n", x);
    //Número original;
    
    x = dobra(&x);
    printf("Número pós função: %d\n", x);
    //O número é dobrado, por tabela o número original também;
    
    soma(&x); 
    printf("Número pos procedimento %d\n", x);
    //O número é somado com 10, não temos mais o número original;
    
    return 0;
}
