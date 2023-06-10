#include <stdio.h>

int SumaNieparzystychCyfr(char* napis)
{
    int suma = 0;

    for (int i = 0; napis[i] != 0; i++)
    {
        int cyfra = napis[i] - '0';  // przechodze z chara na tablice

        if (cyfra % 2 != 0)
        {
            suma += cyfra;
        }
    }

    return suma;
}

int main()
{
    char* liczba = "1234567";
    int suma = SumaNieparzystychCyfr(liczba);

    printf("Suma cyfr nieparzystych: %d\n", suma);

    return 0;
}
