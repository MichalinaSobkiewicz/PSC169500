#include <stdio.h>
#include <stdlib.h>

int pierwiastek (int liczba)
{

    int wynik = 0;
    for (int i=0; i <= liczba; i++)
    {
        wynik = sqrt(liczba);
    }
    return wynik;
}


int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("Pierwiastek bez rozwiniecia z podanej liczby to: %d", pierwiastek(n));
    return 0;
}
