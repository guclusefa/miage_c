#include <stdio.h>

int main(){
    // declaration
    int i, x, res;
    int more = 1;

    i = 1;
    do{
        printf("Saisir nombre %d\n", i);
        scanf("%d", &x);
        if (x % 2 == 0){
            res++;
        }

        printf("encore un ? \n");
        scanf("%d", &more);
        i++;
    } while(more != 0);

    printf("nmbre de paire saisie : %d\n", res);

    return 0;
}