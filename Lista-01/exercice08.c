#include <stdio.h>

int quadrado(int a) {
    return a * a;
}

int main() {
    int x;
    scanf(" %i", &x);
    int original = x;
    
    x = quadrado(x);
    printf("O quadrado de %d é %i!\n", original, x);
    
    return 0;
}
