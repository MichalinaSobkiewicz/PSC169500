#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Wartisc bezwzgledna- dla double'a fabs()
int main()
{
    double x;
    printf("Wpisz liczbe wymierna: ");
    scanf("%lf", & x);
    double wynik = fabs(x);
    printf("Wartosc bezwzgledna z tej liczby to: %lf", wynik);
    return 0;
}
