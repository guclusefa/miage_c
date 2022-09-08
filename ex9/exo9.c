#include <stdio.h>

int compte(int x){
    int i;
    for (i = 1; i < 4; i++)
        x = x*i;
    return x;
}

int main(void){
    int k;
    printf("saisir valeur calculs : ");
    scanf("%d", &k);
    printf("renvoie %d et k = %d \n", compte(k), k);
    return 0;
}

// car on multiplie 5 par 1 ensuite par 2 jusqua 4