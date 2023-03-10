# include "lista.h"

void inicializa_lista (tLista *l) {
    l->n = 0;
}

int lista_vazia (tLista *l) {
    return l-> n = 0;
}

int lista_cheia (tLista *l) {
    return (l-> n == MAX);
}

int tamanho_lista (tLista *l) {
    return (l-> n);
}

int insereElemLista (tLista *l, int elem) {
    if (lista_cheia(l)) return 0;
    l->dados[l-> n] = elem;
    l-> n++;
    return 1;
}

int removeElemLista (tLista *l, int elem){
    int i, j;
    if (lista_vazia(l)) return 0;
    for (i = 0; i < l-> n; i++) {
        if (l->dados[i] == elem) {
            for (j = i; j < l-> n; j++) {
                l->dados[j] = l->dados[j+1];
            }
            l-> n--;
            return 1;
        }
    }
    return 0;
}