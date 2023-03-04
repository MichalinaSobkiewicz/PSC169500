#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("Podaj nieujemna liczbe wymierna\n");
    scanf("%d", & x);
    x= sqrt(x);
    printf("Pierwiastek z podanej liczby to %d", x);
    return 0;
}
