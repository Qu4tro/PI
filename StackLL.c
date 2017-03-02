#include <stdlib.h>

#define BSize 100

typedef struct larray {

    int valores[BSize];
    struct larray *prox;

} *LArrays;

typedef struct stack {

    int sp;
    LArrays s;

} Stack;

LArrays new_node(LArrays prox){
    LArrays ll = malloc(sizeof(struct larray));
    ll -> prox = prox;
}

void push(Stack *st, int x){

    if (st -> s == NULL){
        st -> s = new_node(NULL);
    }
  
    if (st -> sp == BSize){
        st -> s = new_node(st -> s);
    }

    (st -> s -> valores)[st -> sp] = x;
    st -> sp += 1;
}

int pop(Stack *st, int *t){

    LArrays tmp;

    if (st == NULL || 
        st -> s == NULL ||
       (st -> sp == 0 && st -> s -> prox == NULL)){
        return -1;
    }

    if (st -> sp == 0){
        tmp = st -> s;

        st -> s = st -> s -> prox;
        st -> sp = 100;

        free(tmp);
    }

    *t = (st -> s -> valores)[(st -> sp) - 1];
    st -> sp -= 1;

    return 0;
}
    
    

// Ex3

/*
LPares zip (LInt a, LInt b, int *c){

    LPares res;

    while(a != NULL && b != NULL){
        res = malloc(sizeof(struct spares));
        res -> x = a -> valor;
        res -> y = b -> valor;
        a = a -> prox;
        b = b -> prox;
        res = res -> prox;
        c ++;
    }   
    res -> prox = NULL;

    return res;

}
*/

int main (){



}


