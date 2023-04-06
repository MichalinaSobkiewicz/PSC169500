#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double geometryczna(int n, unsigned int tab[])
{
    unsigned int iloczyn = 1;

    for (int i = 0; i < n; i++)
    {
        iloczyn *= tab[i];
    }

    double wynik = pow(iloczyn, 1.0 / n);

    return wynik;
}

int main()
{
    unsigned int tab[] = {1, 2, 9, 3, 5, 1, 3};
    int n = sizeof(tab) / sizeof(tab[0]);
    double wynik = geometryczna(n, tab);
    printf("%lf\n", wynik);
    return 0;
}
