#include <stdio.h> 

void trade (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    x = 5;
    y = 8;
    printf(" %d %i\n", x, y);
    
    trade(&x, &y);
    
    printf(" %d %i\n", x, y);
    return 0;
}
