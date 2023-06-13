#include <stdio.h>
#include <stdlib.h>

int sum_of_squares(int const *wsk1, int *const wsk2)
{
    int suma = 0;
    suma += (*wsk1) * (*wsk1);
    suma += (*wsk2) * (*wsk2);
    return suma;
}

int main()
{
    int a = 2;
    int b = 3;
    int wynik = sum_of_squares(&a, &b);
    printf("%d", wynik);
    return 0;
}
