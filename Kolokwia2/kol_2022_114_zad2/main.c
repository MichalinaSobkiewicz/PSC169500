#include <stdio.h>

int ostatniaMaleLitera(char* napis)
{
    int index=-1;

    for (int i = 0; napis[i] != 0; i++)
    {
        if (napis[i] >= 'a' && napis[i] <= 'z')
        //tutaj dajemy informacje o tym, że ma być to mała litera
        //bo małe litery w tablicy ASCII są zlokalizowane między a i z
        //jezeli napis nie ma malych liter, nie wchodzi do tej pętli i zwraca indeks z początkowo zainicjalizowaną wartością = -1

        {
            index = i;  // Aktualizacja indeksu ostatniej małej litery
        }


    }

    return index;
}

int main() {
    char napis[] = "Przykladowy Napis";

    int indeks = ostatniaMaleLitera(napis);

    printf("Indeks ostatniej malej litery: %d\n", indeks);
    return 0;
}
