#include <stdio.h>
#include <stdlib.h>


struct Programista
{
    char nazwisko[50];
    int doswiadczenie;
};

char* najlepszyprogramista(int n, struct Programista tab[n])
{
    int najwiekszystaz = tab[0].doswiadczenie;
    int indeksnajlepszego = 0;

    for (int i = 1; i < n; i++)
    {
        if (tab[i].doswiadczenie >= najwiekszystaz)
        {
            najwiekszystaz = tab[i].doswiadczenie;
            indeksnajlepszego = i;
        }
    }

    return tab[indeksnajlepszego].nazwisko;
}

int main()
{
    struct Programista programista1 = {"Wisniewski", 244421};
    struct Programista programista2 = {"Malinowski", 653332};
    struct Programista programista3 = {"Sobkiewicz", 555331};
    struct Programista programista4 = {"Sowa", 653332};

    struct Programista tablica_programistow[4] = {programista1, programista2, programista3, programista4};
    int n = 4;
    char* wynik = najlepszyprogramista(n, tablica_programistow);

    printf("%s\n", wynik);

    return 0;
}
