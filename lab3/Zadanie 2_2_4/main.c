#include <stdio.h>
#include <stdlib.h>

int potega(int wykladnik)
{
    int wynik = 1;
    for(int i = 1; i <= wykladnik; i++)
    {
        wynik *= 2;
    }
    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("silnia z podanej liczby to %d", potega(n));
    return 0;
}
