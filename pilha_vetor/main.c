#include "pilha_vetor.h"
#include <stdio.h>

int main(void){
    Pilha pilha;
    int valor;
    inicializaPilha(&pilha);
    empilha(&pilha, 1);
    empilha(&pilha, 2);
    empilha(&pilha, 3);

    printf("O topo da pilha é: %d\n", ler_topo(&pilha));

    printf("tamanho da pilha: %d\n", tamanhoPilha(&pilha));

    printf("pilha vazia: %d\n", pilhaVazia(&pilha));




    return 0;
}