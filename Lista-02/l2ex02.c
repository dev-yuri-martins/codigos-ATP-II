#include <stdio.h>

void numero(int x) {
    x *= 2;
    printf("Pós função: %i\n", x);
}

int main() {
    int a;
    scanf(" %d", &a);
    
    printf("Original: %d\n", a);
    
    numero(a);
    
    printf("Original de novo: %d\n", a);
    return 0;
}
