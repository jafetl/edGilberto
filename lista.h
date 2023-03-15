# ifndef _Lista_H_
# define _Lista_H_
# define MAX 100

typedef struct {
    int dados[MAX];
    int n;
} tLista;

extern void inicializaLista(tLista *lista);
extern int insereElemLista(tLista *lista, int valor);
extern int removeElemLista(tLista *lista, int valor);
extern int tamanhoLista(tLista *lista);
extern int listaCheia(tLista *lista);
extern int listaVazia(tLista *lista);
extern int removePosLista(tLista* l, int pos);
extern int inserePosLista(tLista* l, int pos, int elem);
void imprimeLista(tLista *lista);

#endif