#include <stdio.h> 

    int soma (int n) {
        if (n == 1) {
            return 1;
        }
        return n + (soma(n - 1));
    }
    
    int main() {
        int x;
        scanf(" %d", &x);
        int original = x;
        
        x = soma(x);
        printf("soma de todos números até %d é igual a %d\n", original, x);
    }

/*
int soma (int n) {
    if (n == 1) {
        return 1;
    }
    int anterior = n - 1;
    return n + soma(anterior);
}
Também funcionaria eu acho;
*/
