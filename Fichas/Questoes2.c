#include "Questoes2.h"
#include <stdlib.h>
#include <stdio.h>

LInt array_to_LInt(int* array, int n){

    int i;
    LInt l, temp, first_node;
    l = malloc(sizeof(struct slist));
    l -> valor = array[0];

    first_node = l;

    for (i = 1; i < n; ++i) {
        temp = malloc(sizeof(struct slist));
        temp -> valor = array[i];

        l -> prox = temp;
        l = l -> prox;
    }

    return first_node;
}

void imprime(LInt l){
    for (;l != NULL; l = l -> prox) {
        printf("%d\n", l -> valor);
    }
    printf("\n");
}

void printLInt(LInt l){
    for (;l != NULL; l = l -> prox) {
        printf("%d ", l -> valor);
    }
    printf("\n");
}



int length(LInt l){

    int length = 0;

    while (l != NULL){
        length += 1; 
        l = l -> prox;
    }

    return length;
}

LInt clone(LInt l){

    LInt clone, l2, temp;

    clone = malloc(sizeof(struct slist));
    clone -> valor = l -> valor;

    l = l -> prox;

    l2 = clone;

    while (l != NULL){

        temp = malloc(sizeof(struct slist));
        temp -> valor = l -> valor;

        l2 -> prox = temp;
        l2 = l2 -> prox;

        l = l -> prox;
    }

    return clone;
}

void freeL(LInt l){

    LInt l2;

    while (l != NULL){
        l2 = l -> prox;
        free(l);
        l = l2;
    }
}

LInt reverse(LInt l){

    LInt current, before, after;
    
    if (l == NULL || l -> prox == NULL){
        return l; 
    }

    before = l;
    after = before -> prox;
    current = after;
    before -> prox = NULL;

    while(current != NULL) {

        after = current -> prox;
        current -> prox = before;

        before = current;
        current = after;
    }

    return before;
}

LInt create_node(int x, LInt next){

    LInt new = malloc(sizeof(struct slist));
    new -> valor = x;
    new -> prox = next;

    return new;
}

void concat(LInt *l1, LInt l2){

    LInt temp;

    if (*l1 == NULL){
        *l1 = l2; 
        return;
    }

    temp = *l1;

    while (temp -> prox != NULL){
        temp = temp -> prox;
    }

    temp -> prox = l2;
}

void snoc(LInt *l, int x){
    LInt new = create_node(x, NULL);
    concat(l, new);
}


void inorder(ABin arv, LInt *l){




}


int main(int argc, char *argv[]){

    int array[4] = {1, 2, 3, 4};

    LInt lint =  array_to_LInt(array, 4);


    printLInt(lint);

    return 0;
}
