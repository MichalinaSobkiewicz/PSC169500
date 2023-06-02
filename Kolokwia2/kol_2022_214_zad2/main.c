#include <stdio.h>

int ostatniaCyfra(char* napis)
{
    int indeks = 0;
    int ostatniIndeks = 0;

    while (napis[indeks] != 0)
    {
        if (napis[indeks] >= 48 && napis[indeks] <= 57)
        {
            ostatniIndeks = indeks;
        }

        indeks++;
    }

    return ostatniIndeks;
}

int main() {
    char napis1[] = "ka12hgi1jg0d8";

    int indeks1 = ostatniaCyfra(napis1);

    printf("Napis1: ostatnia cyfra na indeksie %d\n", indeks1);

    return 0;
}
