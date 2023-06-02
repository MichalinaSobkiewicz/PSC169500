#include <stdio.h>
#include <stdlib.h>
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
    char znak = 'x';

    char* adres = znajdzPierwszyZnak(napis, znak);

    printf("%p\n", (void*)adres);


    return 0;
}
