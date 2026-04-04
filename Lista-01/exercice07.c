#include <stdio.h>

int par(int x) {
    if (x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf(" %i", &num);
    
    num = par(num);
    if (par(num)) {
        printf("Falso\n");
    } else {
        printf("Verdadeiro\n");
    }
    return 0;
}
