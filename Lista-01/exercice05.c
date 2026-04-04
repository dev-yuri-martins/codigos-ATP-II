#include <stdio.h>

double media(double a, double b, double c) {
    return (a + b + c) / 3.0;
} 

int main(){
    double x, y, z, result;
    scanf(" %lf %lf %lf", &x, &y, &z);
    
    result = media(x, y, z);
    printf("A média é: %.2lf\n", result);
    
    return 0;
}

//Sim, nesse código o aluno pode ter uma nota > 10
