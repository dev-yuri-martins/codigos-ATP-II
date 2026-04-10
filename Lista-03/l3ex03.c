#include <stdio.h>

int potencia(int b, int e) {
    if (e == 0) {
        return 1;
    }
    int anterior = e - 1;
    return b * potencia(b, anterior);
}

int main() {
    int base, expoente;
    scanf(" %d %d", &base, &expoente);
    
    int result = potencia(base, expoente);
    
    printf("%d elevado a %d é igual a %d\n", base, expoente, result);
    
    return 0;
}
