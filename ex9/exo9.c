#include <stdio.h>

int compte(int x){
    int i;
    for (i = 1; i < 4; i++)
        x = x*i;
    return x;
}