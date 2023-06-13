#include "pilha_encadeada.h"
#include <stdlib.h>

void inicializaPilha(Pilha* pilha) {
    pilha->topo = NULL;
}

int pilhaVazia(Pilha* pilha) {
    return pilha->topo == NULL;
}

int tamanhoPilha(Pilha* pilha) {
    int tamanho = 0;
    No* atual = pilha->topo;
    while (atual != NULL) {
        tamanho++;
        atual = atual->proximo;
    }
    return tamanho;
}

int empilha(Pilha* pilha, int valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    if (novo_no == NULL) {
        return 0; // Erro: não há memória disponível
    }
    novo_no->valor = valor;
    novo_no->proximo = pilha->topo;
    pilha->topo = novo_no;
    return 1; // Empilhamento bem-sucedido
}

int desempilha(Pilha* pilha, int* valor) {
    if (pilhaVazia(pilha)) {
        return 0; // Erro: pilha vazia
    }
    No* temp = pilha->topo;
    *valor = temp->valor;
    pilha->topo = temp->proximo;
    free(temp);
    return 1; // Desempilhamento bem-sucedido
}

int topoPilha(Pilha* pilha, int* valor) {
    if (pilhaVazia(pilha)) {
        return 0; // Erro: pilha vazia
    }
    *valor = pilha->topo->valor;
    return 1; // Operação bem-sucedida
}

int mostrar_topo(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        return 0; // Erro: pilha vazia
    }
    printf("Topo: %d\n", pilha->topo->valor);
    return 1; // Operação bem-sucedida
}

int pop(Pilha* pilha) {
    if (pilhaVazia(pilha)) {
        return 0; // Erro: pilha vazia
    }
    No* temp = pilha->topo;
    pilha->topo = temp->proximo;
    free(temp);
    return 1; // Desempilhamento bem-sucedido
}