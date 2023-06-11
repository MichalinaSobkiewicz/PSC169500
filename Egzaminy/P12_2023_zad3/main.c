#include <stdio.h>
#include <stdlib.h>

struct Kierowca
{
    char imie[50];
    int liczba_wypadkow;
};

struct Kierowca najmniejwypadkow(int n, struct Kierowca tab[n])
{
    struct Kierowca najmniejsza_ilosc_wypadkow = tab[0];

    for (int i = 1; i < n; i++)
    {
        if (tab[i].liczba_wypadkow <= najmniejsza_ilosc_wypadkow.liczba_wypadkow)
        {
            najmniejsza_ilosc_wypadkow = tab[i];
        }
    }

    return najmniejsza_ilosc_wypadkow;
}

int main()
{
    struct Kierowca kierowca1 = {"Jan Kowalski", 2};
    struct Kierowca kierowca2 = {"Piotr Wisniewski", 1};
    struct Kierowca kierowca3 = {"Adam Malinowski", 5};
    struct Kierowca kierowca4 = {"Krzysztof Grabowski", 1};

    struct Kierowca tablica_kierowcow[] = {kierowca1, kierowca2, kierowca3, kierowca4};
    int rozmiar = 4;

    struct Kierowca wynik = najmniejwypadkow(rozmiar, tablica_kierowcow);

    printf("imie ostatniego kierowcy z listy o najmniejszej liczbie wypadkow: %s\n", wynik.imie);
    printf("liczba wypadkow: %d\n", wynik.liczba_wypadkow);

    return 0;
}

