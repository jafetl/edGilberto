#include <stdio.h>
#include <stdlib.h>
#include "listaE.h"



void inicializaLista(struct ListaEncadeada* lista) {
    lista->cabeca = NULL;
}

int insereElemLista(struct ListaEncadeada* lista, int valor) {
    struct No* novo_no = (struct No*)malloc(sizeof(struct No));
    if (novo_no == NULL) {
        return 0; // Erro: não há memória disponível
    }
    novo_no->valor = valor;
    novo_no->proximo = lista->cabeca;
    lista->cabeca = novo_no;
    return 1; // Inserção bem-sucedida
}

int removeElemLista(struct ListaEncadeada* lista, int valor) {
    if (lista->cabeca == NULL) {
        return 0; // Erro: lista vazia
    }
    struct No* atual = lista->cabeca;
    struct No* anterior = NULL;
    while (atual != NULL) {
        if (atual->valor == valor) {
            if (anterior == NULL) {
                lista->cabeca = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return 1; // Remoção bem-sucedida
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return 0; // Erro: elemento não encontrado
}

int tamanhoLista(struct ListaEncadeada* lista) {
    int tamanho = 0;
    struct No* atual = lista->cabeca;
    while (atual != NULL) {
        tamanho++;
        atual = atual->proximo;
    }
    return tamanho;
}

int listaCheia(struct ListaEncadeada* lista) {
    // Nesta implementação, a lista encadeada nunca fica cheia
    return 0;
}

int listaVazia(struct ListaEncadeada* lista) {
    return lista->cabeca == NULL;
}

int removePosLista(struct ListaEncadeada* lista, int pos) {
    if (lista->cabeca == NULL) {
        return 0; // Erro: lista vazia
    }
    if (pos < 0) {
        return 0; // Erro: posição inválida
    }
    if (pos == 0) {
        struct No* temp = lista->cabeca;
        lista->cabeca = lista->cabeca->proximo;
        free(temp);
        return 1; // Remoção bem-sucedida
    }
    struct No* atual = lista->cabeca;
    struct No* anterior = NULL;
    int contador = 0;
    while (atual != NULL && contador < pos) {
        anterior = atual;
        atual = atual->proximo;
        contador++;
    }
    if (atual == NULL) {
        return 0; // Erro: posição inválida
    }
    anterior->proximo = atual->proximo;
    free(atual);
    return 1; // Remoção bem-sucedida
}

int inserePosLista(struct ListaEncadeada* lista, int pos, int elem) {
    if (pos < 0) {
        return 0; // Erro: posição inválida
    }
    if (pos == 0) {
        struct No* novo_no = (struct No*)malloc(sizeof(struct No));
        if (novo_no == NULL) {
            return 0; // Erro: não há memória disponível
        }
        novo_no->valor = elem;
        novo_no->proximo = lista->cabeca;
        lista->cabeca = novo_no;
        return 1; // Inserção bem-sucedida
    }
    struct No* atual = lista->cabeca;
    struct No* anterior = NULL;
    int contador = 0;
    while (atual != NULL && contador < pos) {
        anterior = atual;
        atual = atual->proximo;
        contador++;
    }
    if (atual == NULL) {
        return 0; // Erro: posição inválida
    }
    struct No* novo_no = (struct No*)malloc(sizeof(struct No));
    if (novo_no == NULL) {
        return 0; // Erro: não há memória disponível
    }
    novo_no->valor = elem;
    novo_no->proximo = atual;
    anterior->proximo = novo_no;
    return 1; // Inserção bem-sucedida
}

void imprimeLista(struct ListaEncadeada* lista) {
    struct No* atual = lista->cabeca;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

void freeLista(struct ListaEncadeada* lista) {
    struct No* atual = lista->cabeca;
    while (atual != NULL) {
        struct No* temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    lista->cabeca = NULL;
}