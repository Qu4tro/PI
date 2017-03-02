#define MAX 100

typedef struct queue_t {

    int inicio, tamanho;
    int valores[MAX];

} queue;

void initQueue(queue* q){

    q -> inicio = 0;
    q -> tamanho = 0;

}

int isEmptyQ(queue* q){
    return (q -> tamanho == 0);
}

int enqueue(queue* q, int x){

    if ((q -> tamanho) + (q -> inicio) < MAX){

        (q -> valores)[q -> tamanho + q -> inicio] = x;
        q -> tamanho += 1;

        return 0;
    }

    return 1;
}

int dequeue(queue* q, int* x){

    if ((q -> tamanho) > 0){

        *x = (q -> valores[q -> inicio]);
        q -> tamanho -= 1;
        q -> inicio += 1;

        return 0;
    }

    return 1;
}

int front(queue* q, int *x){

    if ((q -> tamanho) > 0){

        *x = (q -> valores[q -> inicio]);

        return 0;
    }

    return 1;
}


int main(){
    
    return 0;
}
