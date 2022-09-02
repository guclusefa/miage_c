#include <stdio.h>

int main(){
    // declaration
    int n1, n2, res;

    // saisie
    printf("Saisir i \n");
    scanf("%d", &n1);
    printf("Saisir j\n");
    scanf("%d", &n2);

    res = n1 -(n1%3);

    for(int i = 1; i < n2; i++){
        res +=3;
        printf("%d ", res);
    }

    return 0;
}

// A REVOIR