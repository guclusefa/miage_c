#include <stdio.h>

#define N 50

char *tableau_rempli(char c){
    // rempli un tab de 50 index avec le char du user
    char tabl[N];
    int i;
    for (i = 0; i < N; i++)
    {
        tabl[i] = c;
    }
    return tabl;
}

int main(){
    char x;
    char *t;
    int j;
    printf("quel chr dans tab?");
    scanf("%c", &x);
    // t prend le tableau de la fonction
    t = tableau_rempli(x);
    printf("tabl rempis : \n");
    printf(" [ ");
    // affiche tt les char du tab
    for (j = 0; j < N; j++)
    {
        printf("%c ", t[j]);
    }
    printf(" ]  \n");
    return 0;
}

// non car tableau est une variable local