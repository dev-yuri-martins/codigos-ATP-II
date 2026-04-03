#include <stdio.h>

double soma(double a, double b) {
    return a + b;
} 

int main() {
    double x , y, i;
    scanf(" %lf %lf", &x, &y);
    
    i = soma(x, y);
    printf("A soma é: %.2lf\n", i);
    return 0;
}
