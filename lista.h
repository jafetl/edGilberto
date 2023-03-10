# ifndef LISTA_H
# define LISTA_H
# define MAX 100

typedef struct {
    int dados[MAX];
    int n;
} tLista;

extern void inicializaLista(tLista *lista);
extern int insereElemLista(tLista *lista, int valor);
extern int removeElemLista(tLista *lista, int valor);
extern int buscaLista(tLista *lista, int valor);
extern int tamanhoLista(tLista *lista);
extern int listaCheia(tLista *lista);
extern int listaVazia(tLista *lista);


#endif