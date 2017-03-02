#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <assert.h>  

/////////////////////////////////////////////////////////////////////////
// Estruturas
////////////////////////////////////////////////////////////////////////

typedef struct slist {
  int valor;
  struct slist* prox;
}* LInt;

typedef struct strlist {
    char* string;
    struct strlist* prox;
}* StrList;

typedef struct nodo {
  char nome [50];
  int numero;
  int nota; 
  struct nodo *esq, *dir;
}* Alunos;


/////////////////////////////////////////////////////////////////////////
// Parte A
////////////////////////////////////////////////////////////////////////

// Ex1
int bitsUm(unsigned int n);

// Ex2
int limpaEspacos (char* s);

// Ex3
int dumpL(LInt l, int v[], int N);

// Ex4
LInt parte(LInt l);


/////////////////////////////////////////////////////////////////////////
// Parte B
////////////////////////////////////////////////////////////////////////

// Ex1
int fnotas(Alunos a, int notas[21]);

// Ex2
int rankNota(int nota, int fnotas[21]);
int rankAlunos(Alunos a, int numero, int fnotas[21]);

// Ex3
StrList acrescenta(StrList l, char* string);
int comNota(Alunos a, int nota, StrList *l);

// Ex4
void preenche(Alunos a, Alunos t[], int freq[21]);
void imprime(Alunos a);
