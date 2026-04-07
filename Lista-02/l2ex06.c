#include <stdio.h>

int triplo(int a) {
    return 3 * a;
}

int main() {
    int x;
    scanf(" %d", &x);
    
    x = triplo(x);
    printf("%d\n", x);
    
    return 0;
}
