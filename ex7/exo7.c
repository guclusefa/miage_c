#include <stdio.h>

int somme(int nombre);
int multiple(int nombre);

int main(){
    int nombre; 
    printf("Saisissez un entier positif : \n");
    scanf("%d", &nombre);

    
    somme(nombre);
    multiple(nombre);
    
    return 0;
}

int somme(nombre){
    int res=0;
    int i=0;
    
    while(i<=nombre){
        res = res + i; 
        i++;
    }
    printf("la somme des entiers de 1 a votre nombre est : %d\n", res);
    return 0;
}

int multiple(nombre){
    int resultat =1;

    for (int i=1; i<=nombre; i++){
        resultat *= i;
    }

    printf("la factorielle de votre nombre est : %d", resultat);

    return 0;
}