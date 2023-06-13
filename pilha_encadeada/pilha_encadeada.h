#ifndef PILHA_ENCADEADA_H
#define PILHA_ENCADEADA_H

typedef struct No {
    int valor;
    struct No* proximo;
} No;

typedef struct {
    No* topo;
} Pilha;

void inicializaPilha(Pilha* pilha);
int pilhaVazia(Pilha* pilha);
int tamanhoPilha(Pilha* pilha);
int empilha(Pilha* pilha, int valor);
int desempilha(Pilha* pilha, int* valor);
int topoPilha(Pilha* pilha, int* valor);
int mostrar_topo(Pilha* pilha);
#endif
