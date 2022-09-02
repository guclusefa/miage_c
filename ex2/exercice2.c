#include <stdio.h>

int main(){
    // declaration
    float x;
    int i, res;

    // saisie
    printf("Saisir le nombre\n");
    scanf("%f", &x);
    

    /*
    // for
    for (i = 1; i<=x; i++) {
        res += i;
    }
    */

    // while
    i = 1;
    while (i <= x) {
        res += i;
        i++;
    }

    // affichage
    printf("Resultat : %d\n", res);

    return 0;
}