#include "ListasLigadas.c"

int main(int argc, char *argv[]){
    
    LInt x = NULL;
    LInt y = NULL;

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    x = array2LL(v, sizeof(v)/sizeof(int));

    y = parte(x);

    printf("Resultado:\n");
    printLL(y);
    printLL(x);

    return 0;
}
