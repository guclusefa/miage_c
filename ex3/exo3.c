#include <stdio.h>

int main(){
    // declaration
    float x;
    int i, res;
    res = 1;

    // saisie
    printf("Saisir le nombre\n");
    scanf("%f", &x);

    // parcourir 
    for (i = 1; i<=x; i++) {
        res = res*i;
    }

    // affichage
    printf("Resultat : %d\n", res);

    return 0;
}