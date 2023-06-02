#include <stdio.h>


char* znajdzPierwszyZnak(char* napis, char znak)
{
    for (int i = 0; napis[i] != 0; i++)
    {
        if (napis[i] == znak)
        {
            return &napis[i];
        }
    }

    return NULL;
}

int main()
{
    char napis[] = "Przykladowy Napis";
    char znak = 'y';

    char* adres = znajdzPierwszyZnak(napis, znak);

    printf("%p\n", (void*)adres);

    return 0;
}

