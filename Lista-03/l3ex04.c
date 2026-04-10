#include <stdio.h> 

int contador = 0;
int original, x;

int counter(int n) {
    if (contador == original) {
        return 1;
    }
    contador ++;
    return counter(n);
}

int main() {
    
    scanf(" %d",&original);
    int x = original;
    
    counter(x);
    printf("o contador deu %d\n", contador);
    
    return 0;
}
//No final das contas a função nem usou o parâmetro que recebeu :( só as variáveis globais

//Sei que não é uma boa prática usar variáveis globais, mais foi só assim que fiz funcionar

