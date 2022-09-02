#include <stdio.h>

int main(){
    // declaration
    float x, f;
    int i, res;

    // saisie
    printf("Saisir le 1er nombre\n");
    scanf("%f", &x);

    // tant que x nest pas sup a f
    do {
        printf("Saisir le 2e nombre superieur au 1er\n");
        scanf("%f", &f);
    } while (x > f);

    /*
    // intermediaire
    if (f < x){
        interm = x;
        x = f;
        f = interm;
    }
    */

    // parcourir 
    for (i = x; i<=f; i++) {
        res += i;
    }

    // affichage
    printf("Resultat : %d\n", res);

    return 0;
}