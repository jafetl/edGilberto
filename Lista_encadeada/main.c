#include "listaE.h"
#include <stdio.h>

int main(void){
    struct ListaEncadeada lista;
    inicializaLista(&lista);

    printf("Lista vazia? %d\n", listaVazia(&lista));
    printf("tamanho da lista: %d\n", tamanhoLista(&lista));

    insereElemLista(&lista, 1);
    insereElemLista(&lista, 2);
    insereElemLista(&lista, 3);

    imprimeLista(&lista);

    inserePosLista(&lista, 1, 15);

    imprimeLista(&lista);

    removeElemLista(&lista, 2);

    imprimeLista(&lista);

    freeLista(&lista);
    
    return 0;
}
