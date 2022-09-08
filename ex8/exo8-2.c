#include <stdio.h>

int suite(int n, int base);

int main()
{
    int nombre;
    int base;
    int flag;
    printf("Saisissez un entier positif n : \n");
    scanf("%d", &nombre);

    printf("Saisissez un entier positif de base : \n");
    scanf("%d", &base);

    do
    {
        suite(nombre, base);
        printf("continuer ? : \n");
        scanf("%d", &flag);
        nombre++;
    } while (flag != -1);

    return 0;
}

int suite(int n, int base)
{
    int res = base;
    int i = 0;

    while (i <= n)
    {
        res = 3 * res + 2;
        i++;
    }

    printf("la suite pour n = %d est : %d\n", n, res);
    return 0;
}