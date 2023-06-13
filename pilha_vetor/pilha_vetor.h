#ifndef PILHA_VETOR_H
#define PILHA_VETOR_H

#define TAMANHO_MAX 100

typedef struct {
    int vetor[TAMANHO_MAX];
    int topo;
} Pilha;

void inicializaPilha(Pilha* pilha);
int pilhaVazia(Pilha* pilha);
int pilhaCheia(Pilha* pilha);
int tamanhoPilha(Pilha* pilha);
int empilha(Pilha* pilha, int valor);
int desempilha(Pilha* pilha, int* valor);
int topoPilha(Pilha* pilha, int* valor);
int ler_topo(Pilha* pilha);
#endif
