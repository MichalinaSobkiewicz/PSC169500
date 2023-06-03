#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Auto
{
    char model[100];
    int liczba_silnikow;
};

int indeks_najdluzszego_modelu(int n, struct Auto a[n])
{
    int indeks = 0;
    int najdluzsza_dlugosc = strlen(a[0].model);

    for (int i = 1; i < n; i++)
    {
        int dlugosc = strlen(a[i].model);
        if (dlugosc > najdluzsza_dlugosc)
        {
            najdluzsza_dlugosc = dlugosc;
            indeks = i;
        }
    }

    return indeks;
}

int main()
{
    struct Auto auto1 = {"Mercedes-Benz", 4};
    struct Auto auto2 = {"BMW", 6};
    struct Auto auto3 = {"Audi", 8};

    struct Auto tablica_aut[3] = {auto1, auto2, auto3};
    int rozmiar_tablicy = 3;

    int indeks = indeks_najdluzszego_modelu(rozmiar_tablicy, tablica_aut);
    printf("Indeks elementu o najdluzszej nazwie modelu: %d\n", indeks);

    return 0;
}

