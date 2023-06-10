#include <stdio.h>
#include <stdlib.h>

struct Kierowca
{
    char imie[50];
    int rekord;
};

char* najgorszykierowca(int n, struct Kierowca tab[n])
{
    int najslabszywynik = tab[0].rekord;
    char* najgorszy_imie = tab[0].imie;

    for(int i = 1; i < n; i++)
    {
        if(tab[i].rekord > najslabszywynik)
        {
            najslabszywynik = tab[i].rekord;
            najgorszy_imie = tab[i].imie;
        }
    }

    return najgorszy_imie;
}

int main()
{
    struct Kierowca kierowca1 = {"Jan Kowalski", 13};
    struct Kierowca kierowca2 = {"Piotr Wiśniewski", 11};
    struct Kierowca kierowca3 = {"Adam Malinowski", 10};
    struct Kierowca kierowca4 = {"Krzysztof Grabowski", 12};

    struct Kierowca tablica_kierowcow[4] = {kierowca1, kierowca2, kierowca3, kierowca4};
    int rozmiar_tablicy = 4;

    char* wynik = najgorszykierowca(rozmiar_tablicy, tablica_kierowcow);
    printf("%s\n", wynik);

    return 0;
}

