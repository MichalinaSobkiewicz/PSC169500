#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Wartisc bezwzgledna- dla integera abs()
int main()
{
    int x;
    printf("Wpisz liczbe wymierna: ");
    scanf("%d", & x);
    int wynik = abs(x);
    printf("Wartosc bezwzgledna z tej liczby to: %d", wynik);
    return 0;
}
