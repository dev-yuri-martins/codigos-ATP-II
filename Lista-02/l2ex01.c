#include <stdio.h>

int x = 10;

void global() {
    printf("O valor na global é %d\n", x);
}

int main() {
      int x = 20;
      printf("O valor na local é %d\n", x);
      
      global();
      
      return 0;
}
