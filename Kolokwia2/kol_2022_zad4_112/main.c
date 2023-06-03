#include <stdio.h>
#include <stdlib.h>

struct Telewizor
{
    char marka[100];
    int cena;
};

int zwroccene(struct Telewizor telewizory[], int rozmiar)
{
    int najmniejsza_cena = telewizory[0].cena;

    for (int i = 1; i < rozmiar; i++)
    {
        if (telewizory[i].cena < najmniejsza_cena)
        {
            najmniejsza_cena = telewizory[i].cena;
        }
    }

    return najmniejsza_cena;
}

int main()
{
    struct Telewizor telew1 = {"LG", 2599};
    struct Telewizor telew2 = {"Samsung", 5049};
    struct Telewizor telew3 = {"Panasonic", 4000};

    struct Telewizor tablica_telewizorow[3] = {telew1, telew2, telew3};
    int rozmiar_tablicy = 3;

    int najmniejsza_cena = zwroccene(tablica_telewizorow, rozmiar_tablicy);
    printf("Najmniejsza cena: %d\n", najmniejsza_cena);

    return 0;
}

