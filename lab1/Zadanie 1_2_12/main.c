#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    printf("Podaj liczbe wymierna: ");
    scanf("%lf", &x);
    printf("Ta liczba w postaci wykladniczej to: %e\n", x);
    //%e do wyswietlania liczby w postaci wykladniczej
    return 0;
}
