#include <assert.h>
#include <stdio.h>
#define MAX 100

typedef struct stack_t {
    int sp;
    int valores [MAX];
} stack;

void initStack(stack* s){
    s -> sp = 0;
}

int isEmptyS(stack *s){
    return (s -> sp == 0);
}

int push(stack *s, int x){

    if (s -> sp < MAX){
        s -> valores[s -> sp] = x;
        s -> sp += 1;

        return 0;
    } 
    
    return 1;
}

int pop(stack *s, int* x){

    if (s -> sp > 0){

        s -> sp -= 1;
        *x = s -> valores[s -> sp];
    
        return 0;
    }

    return 1;
}

int top(stack* s, int* x){

    if (s -> sp > 0){

        *x = s -> valores[s -> sp - 1];
    
        return 0;
    }

    return 1;
}


void test(){

    stack *s;
    int* x;
    int* y;
    int* w;
    int* z;

    initStack(s);
    assert(isEmptyS(s) > 0);
    push(s, 4);
    assert(isEmptyS(s) == 0);
    top(s, x);
    assert(*x == 4);
    push(s, *x);
    top(s, y);
    assert(*y == 4);
    pop(s, w);
    assert(*w == 4);
    pop(s, z);
    assert(*z == 4);

    printf("Test sucessful");
}

int main(){
    
    test();
    return 0;
}
