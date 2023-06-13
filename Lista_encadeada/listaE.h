//Lista encadeada

#ifndef LISTAE_H
#define LISTAE_H

struct No {
    int valor;
    struct No* proximo;
};

struct ListaEncadeada {
    struct No* cabeca;
};

void inicializaLista(struct ListaEncadeada* lista);
int insereElemLista(struct ListaEncadeada* lista, int valor);
int removeElemLista(struct ListaEncadeada* lista, int valor);
int tamanhoLista(struct ListaEncadeada* lista);
int listaCheia(struct ListaEncadeada* lista);
int listaVazia(struct ListaEncadeada* lista);
int removePosLista(struct ListaEncadeada* lista, int pos);
int inserePosLista(struct ListaEncadeada* lista, int pos, int elem);
void imprimeLista(struct ListaEncadeada* lista);
void freeLista(struct ListaEncadeada* lista);

#endif