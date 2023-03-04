#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1, liczba2;
    int wieksza;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &liczba1, &liczba2);

    if (liczba1 >= liczba2)
    {
        wieksza = liczba1;
    }
    //poprzez znak >= odhaczam mozliwosc ze jesli liczby sa rowne
    //to wyswietlic ma sie obojetnie ktora
    else
    {
        wieksza = liczba2;
    }

    printf("Wieksza liczba to liczba %d", wieksza);
    return 0;
}
