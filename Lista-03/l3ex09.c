/*
Ambos os códigos fazem a mesma coisa, mas o que usa recursividade gasta mais memória

#include <stdio.h> 

int fatorial (int n) {
    if (n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int x;
    scanf(" %d", &x);
    int original = x;
    x = fatorial(x);
    printf("%d! é = %d\n", original, x);
    
    return 0;
}

=================================================

#include <stdio.h>

int fatorial (int n) {
    int resposta = 1;
    for(int i = 1; i <= n; i++){
        resposta *= i;
    }
    return resposta;
}

int main() {
    int num;
    scanf(" %d", &num);
    printf("%d\n", num);
    
    num = fatorial(num);
    
    printf("%d\n", num);
    
    return 0;
}
*/
