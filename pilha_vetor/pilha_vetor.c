#include "pilha_vetor.h"

void inicializaPilha(Pilha* pilha) {
    pilha->topo = -1;
}

int pilhaVazia(Pilha* pilha) {
    return pilha->topo == -1;
}

int pilhaCheia(Pilha* pilha) {
    return pilha->topo == TAMANHO_MAX - 1;
}

int tamanhoPilha(Pilha* pilha) {
    return pilha->topo + 1;
}

int empilha(Pilha* pilha, int valor) {
    if (pilhaCheia(pilha)) {
        return 0; // Erro: pilha cheia
    }
    pilha->topo++;
    pilha->vetor[pilha->topo] = valor;
    return 1; // Empilhamento bem-sucedido
}

int desempilha(Pilha* pilha, int* valor) {
    if (pilhaVazia(pilha)) {
        return 0; // Erro: pilha vazia
    }
    *valor = pilha->vetor[pilha->topo];
    pilha->topo--;
    return 1; // Desempilhamento bem-sucedido
}

int topoPilha(Pilha* pilha, int* valor) {
    if (pilhaVazia(pilha)) {
        return 0; // Erro: pilha vazia
    }
    *valor = pilha->vetor[pilha->topo];
    return 1; // Operação bem-sucedida
}

int ler_topo(Pilha* pilha) {
    int valor;
    if (topoPilha(pilha, &valor)) {
        printf("Topo da pilha: %d\n", valor);
    } else {
        printf("Pilha vazia!\n");
    }
}