#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1,liczba2;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d",& liczba1, & liczba2);

    int bezwl1 = abs(liczba1);
    int bezwl2 = abs(liczba2);

    if (bezwl1>bezwl2)
    {
        printf("Wartosc bezwzgledna z pierwszej liczby jest wieksza niz z liczby drugiej");
    }

    else if (bezwl2>bezwl1)
    {
        printf("Wartosc bezwzgledna z drugiej liczby jest wieksza niz z liczby pierwszej");
    }

    else
    {
        printf("Wartosci bezwzgledne obu liczb sa takie same");
    }
    return 0;


}
