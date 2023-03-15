#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  tLista lista;
  inicializaLista(&lista);
  printf("lista iniciada\n\n");
  
  printf("O tamanho da lista e: %d\n\n", tamanhoLista(&lista));
  printf("Se a saida for 0 a lista nao esta cheia, se for 1 lista cheia, saida:  %d\n\n", listaCheia(&lista));
  
  inserePosLista(&lista, 0, 1);
  inserePosLista(&lista, 1, 2);
  inserePosLista(&lista, 2, 3);
  inserePosLista(&lista, 3, 4);
  

  printf("O tamanho da lista e: %d\n", tamanhoLista (&lista));
  removePosLista(&lista, 1);
  printf("Inserindo na posicao 2 o elemento 200, poderiamos inserir/modificar atraves desta funcao\n");
  inserePosLista(&lista, 2, 200);
  printf("O tamanho da lista e: %d\n", tamanhoLista (&lista));
  imprimeLista(&lista);
  return 0;
}