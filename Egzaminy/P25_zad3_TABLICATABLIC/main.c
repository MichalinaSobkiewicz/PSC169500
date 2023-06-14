#include <stdio.h>
#include <stdlib.h>

double sredniaprzekatnej(int n, int m, int tab[n][m])
{
    double suma=0;
    int licznik=0;

    if(n!=m)
    {
        printf("Tablica nie jest kwadratowa, nie mozemy mowic o glownej przekatnej");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        suma += tab[i][i];
        licznik++;
    }

    if (licznik > 0)
    {
        double srednia = suma / licznik;
        return srednia;
    } else {
        printf("Brak elementów na przekątnej!\n");
        return 0.0;
    }
}
int main()
{
    int tablica[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3; // liczba wierszy
    int m = 3; // liczba kolumn

    double srednia = sredniaprzekatnej(n, m, tablica);
    printf("Srednia elementow na przekatnej: %lf\n", srednia);

    return 0;
}


