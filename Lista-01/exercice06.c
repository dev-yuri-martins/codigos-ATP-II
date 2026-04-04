#include <stdio.h>

void aprovacao(double x) {
    if (x >= 6.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    double media;
    scanf(" %lf", &media);
    
    aprovacao(media);
    return 0;
}
