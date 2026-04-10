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
