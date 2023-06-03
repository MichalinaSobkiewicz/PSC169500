#include <stdio.h>
#include <stdlib.h>

struct Budynek
{
    char adres[100];
    int numer;
};

int dlugosc_adresu(const char* adres)
{
    int dlugosc = 0;
    while (adres[dlugosc] != '\0')
    {
        dlugosc++;
    }
    return dlugosc;
}

int numer_najkrotszy_adres(int n, struct Budynek a[n])
{
    const char* najkrotszyadres = a[0].adres;
    int najmniejsza_dlugosc = dlugosc_adresu(najkrotszyadres);
    int numer = a[0].numer;

    for (int i = 1; i < n; i++)
    {
        int dlugosc = dlugosc_adresu(a[i].adres);
        if (dlugosc < najmniejsza_dlugosc)
        {
            najkrotszyadres = a[i].adres;
            najmniejsza_dlugosc = dlugosc;
            numer = a[i].numer;
        }
    }

    return numer;
}

int main()
{
    struct Budynek budynek1 = {"Sikorskiego-Wilczynskiego", 8};
    struct Budynek budynek2 = {"Jarocka", 12};
    struct Budynek budynek3 = {"Minakowskiego", 7};

    struct Budynek tablica_budynkow[3] = {budynek1, budynek2, budynek3};
    int rozmiartablicy = 3;

    int wynik = numer_najkrotszy_adres(rozmiartablicy, tablica_budynkow);
    printf("Numer budynku o najkrótszym adresie: %d\n", wynik);

    return 0;
}

