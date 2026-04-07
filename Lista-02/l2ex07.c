#include <stdio.h> 

void increase(int *a) {
    (*a)++;
}

int main() {
    int x = 9;
    printf(" %d", x);
    
    increase(&x);
    
    printf(" %d\n", x);
    return 0;
}
