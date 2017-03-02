#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef  struct slist {
    int valor;
    struct slist *prox;
} *LInt;

void printLL(LInt l){

    while (l != NULL){
        printf("%d ", l -> valor);
        l = l -> prox;
    }
    puts("");
}

void freeL(LInt l){

    LInt l2;

    while (l != NULL){
        l2 = l -> prox;
        free(l);
        l = l2;
    }
}


LInt new_node(int x, LInt prox){
    LInt l = malloc(sizeof(struct slist));
    l -> valor = x;
    l -> prox = prox;

    return l;
}

void add(LInt *l, int x){

    LInt new_node = malloc(sizeof(struct slist));
    new_node -> valor = x;
    new_node -> prox = *l;

    *l = new_node;
}

LInt get(LInt l, int i){

    if (l == NULL){
        return NULL; 
    }
    if (i == 0){
        return l;
    }

    return get(l -> prox, i - 1);
}

LInt popNext(LInt l){
    assert(l -> prox);

    LInt temp = l -> prox;
    l -> prox = l -> prox -> prox;

    return temp;
}

LInt pop(LInt* l){
    assert(l);

    LInt temp = *l;
    *l = (*l) -> prox;

    return temp;
}



LInt cloneRev(LInt ll){

    LInt r = NULL;
    while (ll != NULL){
        r = new_node(ll -> valor, r);
        ll = ll -> prox;
    }

    return r;
}

void merge(LInt *r, LInt a, LInt b){

    if (a == NULL){
        *r = b; 
        return;
    } else if (b == NULL){
        *r = a; 
        return;
    } 

    if ((a -> valor) < (b -> valor)){
        merge(r, a -> prox, b);
        a -> prox = *r;
        *r = a;
    } else {
        merge(r, a, b -> prox);
        b -> prox = *r;
        *r = b;
    }

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

void append(LInt *l, int x){
    LInt new = new_node(x, NULL);
    concat(l, new);
}

LInt range(int start, int end){ 
    int i;

    LInt first = new_node(start, NULL);
    LInt second;
    for(i = start + 1; i < end; i++){
        second = new_node(i, NULL);
        concat(&first, second);
    }

    return first;
}

LInt array2LL_r(int *array, int n){

    if (n <= 0 || array == NULL){
        return NULL; 
    }
    LInt l = new_node(array[0], NULL);
    l -> prox = array2LL_r(array + 1, n - 1);

    return l;
}

LInt array2LL(int* array, int n){

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

    l -> prox = NULL;

    return first_node;
}

int LL2array(LInt l, int v[], int N){

    int i = 0;

    for (;l != NULL; l = l -> prox){
        v[i] = l -> valor;
        i++;
    }

    return i;
}

int length(LInt l){

    int length = 0;

    for (;l != NULL; l = l -> prox){
        length += 1; 
    }

    return length;
}

LInt clone(LInt l){

    LInt clone, l2;

    clone = new_node(l -> valor, NULL);

    l = l -> prox;
    l2 = clone;
    while (l != NULL){

        l2 -> prox = new_node(l -> valor, NULL);
        l2 = l2 -> prox;

        l = l -> prox;
    }

    return clone;
}

LInt splitOn(LInt* l, int index){
    assert(*l != NULL);

    LInt first_node = *l;

    LInt mid = get(*l, index - 1);

    if (mid != NULL){
        *l = mid -> prox;
        mid -> prox = NULL;
    } else {
        *l = first_node;
        return NULL;
    }

    return first_node;
}


LInt parteAmeio(LInt *l){

    int mid = length(*l) / 2;
    return splitOn(l, mid);
}

LInt parteAmeio2(LInt *l){
    LInt l2 = clone(*l);
    LInt l1 = parteAmeio(&l2);

    *l = l1;
    
    return l2;
}

int drop(int n, LInt *l){

    int i;

    LInt current = *l;
    for (i = 0; i < n; i++){
        if (current == NULL){
            return i; 
        }
        
        free(pop(l));
    }

    *l = current;
    return i;
}

int removeAll(LInt *l, int n){

    int removed = 0;
    LInt current;

    while ((*l) != NULL && (*l) -> valor == n){
        removed++;
        free(pop(l));
    }
    if ((*l) == NULL){
        return removed; 
    }

    current = *l;
    while (current -> prox)  {
        if (current -> prox -> valor == n){
            removed++;
            free(popNext(*l));
        } else {
            current = current -> prox;
        }
    }
    
    return removed;
}

int take(int n, LInt *l){

    int i;

    LInt current = *l;
    for (i = 0; i < n - 1; i++){
        if (current == NULL){
            return i + 1; 
        }
        
        current = current -> prox;
    }

    if (current != NULL){
        freeL(current -> prox);
        current -> prox = NULL;
        return i + 1;
    } else {
        return i; 
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


int removeOneOrd (LInt *l, int x){

    LInt ll = *l;
    if (*l == NULL){
        return 1;
    }
    if ((*l) -> valor == x){
        free(pop(l));
        return 0;
    }

    while(ll -> prox != NULL){
        if(ll-> prox -> valor == x) {
            free(popNext(ll));
            return 0;
        } else {
            ll = ll-> prox;
        }
    }

    return 1;
}

int removeDups(LInt* l){

    int total = 0;
    LInt current;
    for (current = *l; current != NULL; current = current -> prox) {
        total += removeAll(&current -> prox, current -> valor);
    }

    return total;
}

LInt maior(LInt l){
    assert(l != NULL);
    int maximo = l -> valor;
    LInt maior = l;

    for (l = l -> prox; l; l = l -> prox){
        if ((l -> valor) > maximo){
            maximo = l -> valor; 
            maior = l;
        }
    }

    return maior;
}


int removeMaiorL(LInt *l){

    LInt current;
    LInt max = maior(*l);
    int maximo = max -> valor;

    if (*l == max){
        free(pop(l));
        return maximo;
    }

    for (current = *l; current -> prox; current = current -> prox) {
        if (current -> prox == max){
            free(popNext(current));
            return maximo;
        }
    }
}

LInt Nforward(LInt l, int N){
    // assert(isCircularList(l));

    int i;
    for (i = 0; i < N; ++i) {
        l = l -> prox; 
    }

    return l;
}

/*
void splitMS(LInt l, int n, LInt* mx, LInt* Mx){

    if (l == NULL){
        return ; 
    }
    splitMS(l -> prox, n, mx, Mx);
    if (l -> valor < n){
        *mx = l;      
    } else {
        *Mx = l;
    }
}
*/

LInt parte (LInt l){

    LInt l2;
    LInt r;

    if (l == NULL || l -> prox == NULL){
        return NULL;
    }

    r = popNext(l);

    l = l -> prox;
    l2 = r;
    while(l && l -> prox){
        popNext(l2);
        popNext(l);

        l = l -> prox;
        l2 = l2 -> prox;

    }
    l2 -> prox = NULL;

    return r;
}
