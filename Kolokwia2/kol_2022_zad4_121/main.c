#include <stdio.h>
#include <stdlib.h>

struct Blok
{
    char adres[100];
    int numer;
};

int zwrocnajwiekszynumer(int n, struct Blok a[n])
{
    int najwiekszynumer = a[0].numer;

    for (int i = 1; i < n; i++)
    {
        if (a[i].numer > najwiekszynumer)
        {
            najwiekszynumer = a[i].numer;
        }
    }

    return najwiekszynumer;
}

int main()
{
    struct Blok blok1 = {"Oczapowskiego", 8};
    struct Blok blok2 = {"Kościuszki", 12};
    struct Blok blok3 = {"Hallera", 7};

    struct Blok tablica_blokow[3] = {blok1, blok2, blok3};
    int rozmiar_tablicy = 3;

    int najwiekszy_blok = zwrocnajwiekszynumer(rozmiar_tablicy, tablica_blokow);
    printf("Najwiekszy numer bloku to: %d\n", najwiekszy_blok);

    return 0;
}

