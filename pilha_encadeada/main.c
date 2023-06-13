#include <stdio.h>
#include "pilha_encadeada.h"

int main() {
    Pilha pilha;
    inicializaPilha(&pilha);

    empilha(&pilha, 1);
    empilha(&pilha, 2);
    empilha(&pilha, 3);

    printf("o topo da pilha eh: %d\n", mostrar_topo(&pilha));
    pop(&pilha);
    printf("o topo da pilha eh: %d\n", mostrar_topo(&pilha));
    printf("o tamanho da pilha eh: %d\n", tamanhoPilha(&pilha));
    printf("A pilha esta vaiza? %s\n", pilhaVazia(&pilha) ? "sim" : "nao");

    int valor;
    while (desempilha(&pilha, &valor)) {
        printf("Desempilhado: %d\n", valor);
    }

    return 0;
}
