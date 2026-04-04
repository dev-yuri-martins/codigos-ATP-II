#include <stdio.h>

double soma(double a, double b) {
    return a + b;
}

void resultado(double c) {
    printf("A soma é: %.2lf\n", c);
}

int main() {
    double x, y, i;
    scanf(" %lf %lf", &x, &y); 
    i = soma(x, y);
    resultado(i);
    return 0;
}
