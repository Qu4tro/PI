#include <stdio.h>

#define Max 300

typedef struct linha {
    int numero;
    char nome[100];
    int nota;
} Pauta[Max];


int maxInd(int* array, int n){

    int max = array[0];
    int maxInd = 0;

    int i;
    for (i = 1; i < n; ++i) {
        
        if (max < array[i]){
            max = array[i];
            maxInd = i;
        }
    }

    return maxInd;
}

int maisFreq(Pauta p, int n){

    int notas[20] = {0};
    int i;

    for (i = 0; i < n; ++i) {
        notas[p[i].nota] += 1;
    }

    return maxInd(notas, 20);
}


int main(int argc, char *argv[]){
    
    printf("\n");


    return 0;
}
