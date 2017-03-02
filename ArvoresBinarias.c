#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "ListasLigadas.c"

typedef struct nodo *ABin;

struct nodo {
    int valor;
    ABin esq, dir;
};

int min(int x, int y){
    return (x < y) ? x : y;
}

int max(int x, int y){
    return (x > y) ? x : y;
}
 

void print_inorder(ABin arv){

    if (arv != NULL){
        print_inorder(arv -> esq);
        printf("%d ", arv -> valor);
        print_inorder(arv -> dir);
    }
}


void print_preorder(ABin arv){

    if (arv != NULL){
        printf("%d ", arv -> valor);
        print_preorder(arv -> esq);
        print_preorder(arv -> dir);
    }
}


void print_postorder(ABin arv){

    if (arv != NULL){
        print_postorder(arv -> esq);
        print_postorder(arv -> dir);
        printf("%d ", arv -> valor);
    }
}

void inorder(ABin a, LInt *l){

    if (a != NULL){
        inorder(a -> esq, l);
        add(l, a -> valor);
        inorder(a -> dir, l);
    }
}


void preorder(ABin a, LInt *l){

    if (a != NULL){
        add(l, a -> valor);
        preorder(a -> esq, l);
        preorder(a -> dir, l);
    }
}


void postorder(ABin a, LInt *l){

    if (a != NULL){
        postorder(a -> esq, l);
        postorder(a -> dir, l);
        add(l, a -> valor);
    }
}

void mirror(ABin* a){

    ABin temp;

    if ((*a) != NULL){
        temp = (*a) -> esq;
        (*a) -> esq = (*a) -> dir;
        (*a) -> dir = temp;
        
        mirror(&(*a) -> esq);
        mirror(&(*a) -> dir);
    }
}

int freeAB (ABin a) {

    int cont=1;

    if (a == NULL){
        return 0;
    }

    cont += freeAB(a->esq);
    cont += freeAB(a->dir);
    free(a);

    return cont;
}


int depth (ABin a, int x) {

    int depthE, depthD;
    
    if (a == NULL){
            return -1;
        }
    
    if (a -> valor == x){
            return 1;
            
        } else {
                
                depthE = depth(a -> esq, x);
                depthD = depth(a -> dir, x);
                
                if (depthE == -1 && depthD == -1){
                            return -1;
                        }
                if (depthE == -1 || depthD == -1){
                            return 1 + max(depthE, depthD);
                        } 
                
                return 1 + min(depthE, depthD);
            }
}


int pruneAB(ABin* a, int l){

    int nElems = 0;

    if ((*a) == NULL || l < 0){
        return 0; 
    }

    if (l == 1){
        nElems += freeAB((*a) -> esq);
        nElems += freeAB((*a) -> dir);
        (*a) -> esq = NULL;
        (*a) -> dir = NULL;
        return nElems;
    } else {
        return pruneAB(&(*a) -> esq, l - 1) + pruneAB(&(*a) -> dir, l - 1);
    }
}

int iguaisAB(ABin a, ABin b){

    if (a == b){
        return 1; 
    }
    if (a == NULL || b == NULL){
        return 0; 
    }

    return (a -> valor == b -> valor) && iguaisAB(a -> esq, b -> esq) && iguaisAB(a -> dir, b -> dir);
}



LInt nivelL(ABin a, int n){

    LInt temp;

    if (a == NULL || n <= 0) {
        return NULL; 
    }

    if (n == 1){
        return new_node(a -> valor, NULL);
    } else {
        temp =        nivelL(a -> esq, n - 1);
        concat(&temp, nivelL(a -> dir, n - 1));

        return temp;
    }
}


int nivelV(ABin a, int n, int v[]){

    int size;

    if (a == NULL || n <= 0) {
        return 0; 
    }

    if (n == 1){
        v[0] = a -> valor;
        return 1;
    } else {
        size = nivelV(a -> esq, n - 1, v);

        return size + nivelV(a -> dir, n - 1, v + size);
    }

}


int dumpAbin (ABin a, int v[], int N) {
    
    int size = 0;

    if (a != NULL && N > 0){
        size = dumpAbin(a -> esq, v, N);

        if (size < N){
            v[size++] = a -> valor;
        }
        size += dumpAbin(a -> dir, v + size, N - size);
    }

    return size;
}

