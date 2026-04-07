#include <stdio.h>

int counter = 0;

void ehpar(long int x) {
    if (x % 2 ==0) {
        printf("%ld eh par\n", x);
    } else {
        printf("%ld nao eh par\n", x);
    }
    counter++;
}

//Vamos considerar que o fim das entradas sempre é 0;

int main() {
    long int num = 1;
    while (num != 0){
        scanf("%ld", & num);
        ehpar(num);
    }
    printf("A função foi usada %d vezes\n", counter);
    
    return 0;
}
