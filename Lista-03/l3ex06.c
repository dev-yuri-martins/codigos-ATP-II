#include <stdio.h>

void dobra(int *x) {
    *x *= 2;
}

int main() {
    int num;
    scanf(" %d", &num);
    printf("Numero original: %d\n", num);
    
    int *p = &num;
    
    dobra(p);
    
    printf("Numero pós procedimento: %d\n", num);
    
    return 0;
}
