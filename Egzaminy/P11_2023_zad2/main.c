#include <stdio.h>

int apply(int (*func)(int), int n, int tab[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += func(tab[i]);
    }
    return sum;
}

// Przykładowa funkcja do zastosowania
int potega(int x)
{
    return x * x;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int wynik = apply(potega, rozmiar, tablica);
    printf("Suma wyników: %d\n", wynik);

    return 0;
}
