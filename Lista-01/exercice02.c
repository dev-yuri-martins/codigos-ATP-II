#include <stdio.h>

double dobra(double a) {
    return a * 2.0;
}

int main() {
    double x;
    scanf(" %lf", &x);
    x = dobra(x);
    printf("%.3lf\n", x);
    
    return 0;
}
