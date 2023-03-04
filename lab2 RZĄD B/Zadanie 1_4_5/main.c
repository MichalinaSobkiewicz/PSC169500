#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita\n");
    scanf("%d", &n);

    int suma = 0;
    //aby wynik byl poprawny nasza suma musi miec poczatkowa wartosc 0
    //dla dodawania kwadratow kolejnych liczb 0 nie zmieni wyniku

    for(int i=0; i<=n; i++)
    {
        suma += i*i;
    }

    printf("Suma kwadratow z podanej liczby to %d", suma);

}
