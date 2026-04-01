#include <stdio.h>

void exibir_mensagem(char nome[]) {
    printf("%s.\n", nome);
}

int main() {
    exibir_mensagem("Iniciando o sistema");
    return 0;
}
