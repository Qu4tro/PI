#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <assert.h>  

#include "2015Recurso.h"

/////////////////////////////////////////////////////////////////////////
// Estruturas
////////////////////////////////////////////////////////////////////////

void printArray(int* v, int N){

    int i;
    for(i = 0; i < N; i++){
            printf("%d: %d\n", i, v[i]);
        }
}

// LInt
void printLL(LInt l){

    while (l != NULL){
        printf("%d ", l -> valor);
    l = l -> prox;
    }  
    puts("");
}

// StrList
void printStrList(StrList l){

    while (l != NULL){
            printf("%s ", l -> string);
        l = l -> prox;
        }  
    puts("");
}


// Alunos


/////////////////////////////////////////////////////////////////////////
// Parte A
////////////////////////////////////////////////////////////////////////

// Ex1
int teste_bitsUm(unsigned int n);

// Ex2
int teste_limpaEspacos (char* s);

// Ex3
int teste_dumpL(LInt l, int v[], int N);

// Ex4
LInt teste_parte(LInt l);


/////////////////////////////////////////////////////////////////////////
// Parte B
////////////////////////////////////////////////////////////////////////

// Ex1
int teste_fnotas(Alunos a, int notas[21]);

// Ex2
int teste_rankNota(int nota, int fnotas[21]);
int teste_rankAlunos(Alunos a, int numero, int fnotas[21]);

// Ex3
StrList teste_acrescenta(StrList l, char* string);
int teste_comNota(Alunos a, int nota, StrList *l);

// Ex4
void teste_preenche(Alunos a, Alunos t[], int freq[21]);
void teste_imprime(Alunos a);

int main(){



}
