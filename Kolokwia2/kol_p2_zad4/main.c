#include <stdio.h>

//tworzenie struktury
struct Szkola
{
    char adres[100];
    int numer;
};

void wyswietl_posortowane_szkoly(struct Szkola szkoly[], int rozmiar)
{
    // Sortowanie przez wybieranie
    for (int i = 0; i < rozmiar - 1; i++)
    {
        int indeks_min = i;

        for (int j = i + 1; j < rozmiar; j++)
            {
            if (szkoly[j].numer < szkoly[indeks_min].numer)
            {
                indeks_min = j;
            }
    }

        // Zamiana miejscami
        struct Szkola temp = szkoly[indeks_min];
        szkoly[indeks_min] = szkoly[i];
        szkoly[i] = temp;
    }

    // Wyświetlanie posortowanych szkół
    for (int i = 0; i < rozmiar; i++) {
        printf("Adres: %s, Numer: %d\n", szkoly[i].adres, szkoly[i].numer);
    }
}

int main() {
    // Przykładowy przypadek testowy
    struct Szkola szkola1 = {"Adres 1", 3};
    struct Szkola szkola2 = {"Adres 2", 1};
    struct Szkola szkola3 = {"Adres 3", 2};

    struct Szkola tablica_szkol[3] = {szkola1, szkola2, szkola3};
    int rozmiar_tablicy = 3;

    wyswietl_posortowane_szkoly(tablica_szkol, rozmiar_tablicy);

    return 0;
}
