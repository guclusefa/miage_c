#include <stdio.h>

int main(){
    // declaration
    int n;
    int max = 0;

    for(int i = 1; i<=10;i++){
        printf("Saisir nbre %d\n", i);
        scanf("%d", &n);
        if (n > max) max=n;
    }

    printf("max: %d\n", max);

    return 0;
}

// A REVOIR