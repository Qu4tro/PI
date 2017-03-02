
typedef struct slist *LInt;

typedef struct slist {
    int valor;
    LInt prox;
} Nodo;


typedef struct nodo *ABin;

struct nodo {
    int valor;
    ABin esq, dir;

};
