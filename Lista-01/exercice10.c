#include <stdio.h> 

//Vou fazer todas as três funções considerando apenas 3 entradas
double soma(double a, double b,double c) {
    return a + b + c;
}

double media(double a, double b, double c) {
    double y = soma(a, b, c);
    return (y / 3.0);
}

double maior(double a, double b, double c) {
    int x;
    if (a < b) {
        x = a; a = b; b = x;
    }
    if (a < c) {
        x = a; a = c; c = x;
    }
    if (b < c) {
        x = b; b = c; c = x;
    }
    return a; //O maior valor está em " a "
}

int main() {
//para usar as três vou calcular a media de três alunos e falar a maior entre elas
    double x, y, z, mediaFinal, maiorNota;
    scanf(" %lf %lf %lf", &x, &y, &z);
    mediaFinal = media(x, y, z);
    maiorNota = maior(x, y, z);
    
    printf("A média dos três alunos é %.1lf!\n", mediaFinal);
    printf("A maior nota entre as três é: %.1lf\n", maiorNota);
    
    return 0;
}
