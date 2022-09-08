#include <stdio.h>

int suite(int n);

int main(){
    int nombre; 
    printf("Saisissez un entier positif : \n");
    scanf("%d", &nombre);

    
    suite(nombre);

    return 0;
}


int suite(int n){
    int res=1;
    int i=0;

    while(i<=n){
        res = 3*res+2;
        i++;
    }

    printf("la suite pour n = %d est : %d\n", n, res);
    return 0;
}