#include "2015Recurso.h"

/////////////////////////////////////////////////////////////////////////
// Parte A
////////////////////////////////////////////////////////////////////////

// Ex1
int bitsUm(unsigned int n){
    


}

// Ex2
int limpaEspacos (char* s){

  int i, j = 1;

  for(i = 1; s[i] != '\0'; i++){
    if(!(s[i] == ' ' && s[j - 1] == ' ')) { 
      s[j] = s[i]; // nao sabia qe se podia fazer assim negaçao xDDDDD
      //podias sempre aplicar as leis de morgan :v xDDD 
      //-- tbm dava xDDD vamos ao next
      j++;
    }
  }
  
  s[j] = '\0';
  return j;
}

// Ex3
int dumpL(LInt l, int v[], int N){

    int i = 0;

    while(l != NULL && i < N){
        v[i] = l -> valor;
        l = l -> prox;
        i++;
    }

    return i;
}


// Ex4


/////////////////////////////////////////////////////////////////////////
// Parte B
////////////////////////////////////////////////////////////////////////

Alunos EES(){
    Alunos Kratos = malloc(sizeof(struct nodo));
    strcpy(Kratos -> nome, "Kratos");
    Kratos -> numero = 67634;
    Kratos -> nota = 11;
    Kratos -> esq = NULL;
    Kratos -> dir = NULL;

    Alunos Wild = malloc(sizeof(struct nodo));
    strcpy(Wild -> nome, "Wild");
    Wild -> numero = 67637;
    Wild -> nota = 15;
    Wild -> esq = NULL;
    Wild -> dir = NULL;

    Alunos Express = malloc(sizeof(struct nodo));
    strcpy(Express -> nome, "Express");
    Express -> numero = 67638;
    Express -> nota = 10;
    Express -> esq = NULL;
    Express -> dir = NULL;

    Alunos Ruler = malloc(sizeof(struct nodo));
    strcpy(Ruler -> nome, "Ruler");
    Ruler -> numero = 67652;
    Ruler -> nota = 10;
    Ruler -> esq = NULL;
    Ruler -> dir = NULL;

    Alunos Grey = malloc(sizeof(struct nodo));
    strcpy(Grey -> nome, "Grey");
    Grey -> numero = 67662;
    Grey -> nota = 12;
    Grey -> esq = NULL;
    Grey -> dir = NULL;

    Alunos Stormtrooper = malloc(sizeof(struct nodo));
    strcpy(Stormtrooper -> nome, "Stormtrooper");
    Stormtrooper -> numero = 67665;
    Stormtrooper -> nota = 13;
    Stormtrooper -> esq = NULL;
    Stormtrooper -> dir = NULL;

    Alunos Parkinson = malloc(sizeof(struct nodo));
    strcpy(Parkinson -> nome, "Parkinson");
    Parkinson -> numero = 67671;
    Parkinson -> nota = 11;
    Parkinson -> esq = NULL;
    Parkinson -> dir = NULL;

    Alunos Splinter = malloc(sizeof(struct nodo));
    strcpy(Splinter -> nome, "Splinter");
    Splinter -> numero = 67672;
    Splinter -> nota = 10;
    Splinter -> esq = NULL;
    Splinter -> dir = NULL;

    Alunos Dealer = malloc(sizeof(struct nodo));
    strcpy(Dealer -> nome, "Dealer");
    Dealer -> numero = 67673;
    Dealer -> nota = 12;
    Dealer -> esq = NULL;
    Dealer -> dir = NULL;

    Alunos Psy = malloc(sizeof(struct nodo));
    strcpy(Psy -> nome, "Psy");
    Psy -> numero = 67704;
    Psy -> nota = 10;
    Psy -> esq = NULL;
    Psy -> dir = NULL;

    Alunos Apocalipse = malloc(sizeof(struct nodo));
    strcpy(Apocalipse -> nome, "Apocalipse");
    Apocalipse -> numero = 67707;
    Apocalipse -> nota = 11;
    Apocalipse -> esq = NULL;
    Apocalipse -> dir = NULL;

    Alunos Spinelli = malloc(sizeof(struct nodo));
    strcpy(Spinelli -> nome, "Spinelli");
    Spinelli -> numero = 67709;
    Spinelli -> nota = 10;
    Spinelli -> esq = NULL;
    Spinelli -> dir = NULL;

    Alunos BateNabo = malloc(sizeof(struct nodo));
    strcpy(BateNabo -> nome, "BateNabo");
    BateNabo -> numero = 67712;
    BateNabo -> nota = 10;
    BateNabo -> esq = NULL;
    BateNabo -> dir = NULL;

    Alunos Taliba = malloc(sizeof(struct nodo));
    strcpy(Taliba -> nome, "Talibã");
    Taliba -> numero = 67713;
    Taliba -> nota = 10;
    Taliba -> esq = NULL;
    Taliba -> dir = NULL;

    Alunos Sixty = malloc(sizeof(struct nodo));
    strcpy(Sixty -> nome, "Sixty");
    Sixty -> numero = 67717;
    Sixty -> nota = 10;
    Sixty -> esq = NULL;
    Sixty -> dir = NULL;

    Alunos Wikileaks = malloc(sizeof(struct nodo));
    strcpy(Wikileaks -> nome, "Wikileaks");
    Wikileaks -> numero = 67725;
    Wikileaks -> nota = 12;
    Wikileaks -> esq = NULL;
    Wikileaks -> dir = NULL;

    Alunos Fritz = malloc(sizeof(struct nodo));
    strcpy(Fritz -> nome, "Fritz");
    Fritz -> numero = 67732;
    Fritz -> nota = 10;
    Fritz -> esq = NULL;
    Fritz -> dir = NULL;

    Alunos Ultimate = malloc(sizeof(struct nodo));
    strcpy(Ultimate -> nome, "Ultimate");
    Ultimate -> numero = 67738;
    Ultimate -> nota = 10;
    Ultimate -> esq = NULL;
    Ultimate -> dir = NULL;

    Wild -> esq = Kratos;
    Wild -> dir = NULL;
    Ruler -> esq = NULL;
    Ruler -> dir = NULL;
    Express -> esq = Wild;
    Express -> dir = Ruler;
    Parkinson -> esq = Stormtrooper;
    Parkinson -> dir = NULL;
    Dealer -> esq = NULL;
    Dealer -> dir = NULL;
    Splinter -> esq = Parkinson;
    Splinter -> dir = Dealer;
    Grey -> esq = Express;
    Grey -> dir = Splinter;
    Spinelli -> esq = Apocalipse;
    Spinelli -> dir = NULL;
    Taliba -> esq = NULL;
    Taliba -> dir = NULL;
    BateNabo -> esq = Spinelli;
    BateNabo -> dir = Taliba;
    Wikileaks -> esq = NULL;
    Wikileaks -> dir = NULL;
    Ultimate -> esq = NULL;
    Ultimate -> dir = NULL;
    Fritz -> esq = Wikileaks;
    Fritz -> dir = Ultimate;
    Sixty -> esq = BateNabo;
    Sixty -> dir = Fritz;
    Psy -> esq = Grey;
    Psy -> dir = Sixty;

    return Psy;
}

Alunos Logica(){ 
  
  Alunos a4 = malloc(sizeof(struct nodo));
  char n4[50] = "wikileaks";
  strcpy(a4 -> nome, n4);
  a4 -> numero = 4;
  a4 -> nota = 11;
  
  Alunos a7 = malloc(sizeof(struct nodo));
  char n7[50] = "stormtrooper";
  strcpy(a7 -> nome, n7);
  a7 -> numero = 7;
  a7 -> nota = 12;
  
  Alunos a12 = malloc(sizeof(struct nodo));
  char n12[50] = "express";
  strcpy(a4 -> nome, n12);
  a12 -> numero = 12;
  a12 -> nota = 10;
  
  Alunos a42 = malloc(sizeof(struct nodo));
  char n42[50] = "discotecas";
  strcpy(a42 -> nome, n42);
  a42 -> numero = 42;
  a42 -> nota = 11;
  
  a4 -> esq = NULL;
  a4 -> dir = NULL;
  
  a7 -> esq = a4;
  a7 -> dir = a12;
  
  a12 -> esq = NULL;
  a12 -> dir = a42;
  
  a42 -> esq = NULL;
  a42 -> dir = NULL;
  
  return a7;
  // a arvore e uma cena deste genero: https://imgur.com/DQ6ihLD
  
}

// Ex1
int fnotas(Alunos a, int notas[21]){

    int esq;
    int dir;

    if (a == NULL) {
        return 0;

    } else {  
        notas[a -> nota] += 1;

        esq = fnotas(a -> esq, notas);
        dir = fnotas(a -> dir, notas);

        return 1 + esq + dir;
    }

}

// Ex2
int rankNota(int nota, int fnotas[21]){

    int i;
    int rank = 1;
    for(i = 20; i >= 0; i--) {

        if (i == nota){
            return rank; 
        } else {
            rank += fnotas[i];
        }
    }

    return -1; // se chegar aqui é porque a nota é <0 ou >20
}

int rankAlunos(Alunos a, int numero, int fnotas[21]){

    if (a == NULL){
        return -1; 
    }

    if (a -> numero == numero){
        return rankNota(a -> nota, fnotas);
    } else if (a -> numero < numero){
        return rankAlunos(a -> dir, numero, fnotas);
    } else if (a -> numero > numero){
        return rankAlunos(a -> esq, numero, fnotas);
    }

    // nunca é suposto chegar aqui
    return -1;
}

// Ex3

StrList acrescenta(StrList l, char* string){

    StrList nodo = malloc(sizeof(struct strlist));
    nodo -> string = string;
    nodo -> prox = l;

    return nodo;
}

int comNota(Alunos a, int nota, StrList *l){

    int n_alunos = 0;

    if (a != NULL){

        if (a -> nota == nota){
            *l = acrescenta(*l, a -> nome);
            n_alunos += 1;
        }

        n_alunos += comNota(a -> esq, nota, l);
        n_alunos += comNota(a -> dir, nota, l);
    }

    return n_alunos;

}

// Ex4
void preenche(Alunos a, Alunos t[], int freq[21]){

    if (a != NULL){
        
        t[rankNota(a -> nota, freq) - 1] = a;
        freq[a -> nota] -= 1;
        freq[a -> nota + 1] += 1;

        preenche(a -> esq, t, freq);
        preenche(a -> dir, t, freq);

    }
}

void imprime(Alunos a){

    int i;
    int notas[21] = {0};
    int quantos = fnotas(a, notas);
    Alunos todos[quantos];

    preenche(a, todos, notas);

    for(i = 0; i < quantos; i++){
        printf("%d %s %d\n", 
                todos[i] -> numero,
                todos[i] -> nome,
                todos[i] -> nota);
    }

}

int main(){

    int notas[21] = {0};

    Alunos arvore = EES();

    fnotas(arvore, notas);
    assert(notas[15] == 1);
    assert(notas[13] == 1);
    assert(notas[12] == 3);
    assert(notas[11] == 3);
    assert(notas[10] == 10);

    assert(rankNota(15, notas) == 1);
    assert(rankNota(13, notas) == 2);
    assert(rankNota(12, notas) == 3);
    assert(rankNota(11, notas) == 6);
    assert(rankNota(10, notas) == 9);

    assert(rankAlunos(arvore, 67637, notas) == 1); // a67637  118 (Teve 15 -> rank 1)
    assert(rankAlunos(arvore, 67665, notas) == 2); // a67665  7 (Teve 13 -> rank 2)
    assert(rankAlunos(arvore, 67634, notas) == 6); // Tiveste 11 -> rank 6

    StrList l = NULL;

    assert(comNota(arvore, 15, &l) == 1);
    assert(comNota(arvore, 13, &l) == 1);
    assert(comNota(arvore, 12, &l) == 3);
    assert(comNota(arvore, 11, &l) == 3);
    assert(comNota(arvore, 10, &l) == 10);

    imprime(arvore);

    /* puts("Funciona tudo :D."); */
  
}



