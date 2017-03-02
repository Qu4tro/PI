#include <stdio.h>

int elimRep(int v[], int n){

    int i, j;
    int i2 = 1;
    int repeatedFound;

    for (i = 1; i < n; ++i) {
        repeatedFound = 0;

        for(j = i2; j >= 0; j--){
            if (v[i] == v[j]){
                repeatedFound = 1; 
                break;
            }
        }
        
        if (!repeatedFound)
            v[i2++] = v[i];

    }

    return i2;
}

int main(int argc, char *argv[]){
    
    int i;
    int v[] = {1, 2, 3, 4, 4, 4, 1, 2, 3, 4};
    int x = elimRep(v, 10);
    for (i = 0; i < x; ++i) {
        printf("%d ", v[i]);
        
    }
    return 0;
}
