#include <stdio.h>
#include <math.h>

#define PUISSANCE 3

int main() {
    float nb, resultat;
    // Saisie au clavier
    printf("Saisir le nombre\n");
    scanf("%f", &nb);
    // Calcul
    resultat = pow(nb, PUISSANCE);
    // Affichage du resultat
    printf("Le res de l'elevation a la puissance est : %f\n", resultat);
    return 0;
}

// 1
// warning obtenu par le  compileur car pow n'est pas declaré
// nous devons rajouter la declaration de la fonction pow en ajoutant la bibliotheque

// 2
// i/ non car le preprocesseur a envoyé le code au programme
// ii/ car elle definissent les fonctions 
// iii/ puissance est remaplé par 3 car c'est les macrons qu'on a defini
// iv/ non car elle sont inclus dans le programme compilé

// 3
// compilateur car la fonction pow n'est pas connue


// correction ----------------------------------------
// 

