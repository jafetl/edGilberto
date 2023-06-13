# include "lista.h"
# include <stdio.h>
# include <stdlib.h>

void inicializaLista (tLista *l) {
    l->n = 0;
}

int listaVazia (tLista *l) {
  return l-> n == 0;
}

int listaCheia (tLista *l) {
    return (l-> n == MAX);
}

int tamanhoLista (tLista *l) {
    return (l-> n);
}

int insereElemLista (tLista *l, int elem) {
    if (listaCheia(l)) return 0;
    l->dados[l-> n] = elem;
    l-> n++;
    return 1;
}

int removeElemLista (tLista *l, int elem){
    int i, j;
    if (listaVazia(l)) return 0;
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
int removePosLista(tLista* l, int pos) {
    int i;

    if (pos <= 0 || pos >= l->n) {
      printf("indice invalido, nao foi removido\n");
        return 0;
    }
    for (i = (pos-1); i < l->n - 1; i++) {
        l->dados[i] = l->dados[i + 1];
    }
    l->n--;
    printf("elemento removido da posicao %d\n", pos);
    return 1;
}

int inserePosLista(tLista* l, int pos, int elem){
    int i;
    
    pos--;
    if(listaCheia(l) || pos < 0 || pos > l->n){
      printf("erro: Lembre-se que lista comeca na posicao 1\n");
      return 0;
    }
        

    for(i = l->n; i > pos; i--)
        l->dados[i] = l->dados[i-1];
    l->dados[pos] = elem;
    l->n++;
    printf("elemento %d inserido na posicao %d\n", elem, pos+1);
    return 1;
}
void imprimeLista(tLista *l) {
    int i;
    printf("Lista: ");
    for (i = 0; i < l->n; i++) {
        printf("%d ", l->dados[i]);
        if (i < l->n - 1) printf(", ");
    }
    printf("\n");
}