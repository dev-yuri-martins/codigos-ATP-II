#include <stdio.h> 

int main() {
    int x = 10;
    int *px = &x;
    printf("valor de x %d\n", x);
    
    *px = 77;
    printf("valor de x %d\n", x);
    
    return 0;
}
