#include <stdio.h>

int main() {
    char palavra[] = "Lista";
    char *ponteiro = palavra;
    
    printf("Antes da mudança: %s\n", palavra);
    
    *ponteiro = 'P';
    
    printf("Depois da mudança: %s\n", palavra);
    
    return 0;
}
