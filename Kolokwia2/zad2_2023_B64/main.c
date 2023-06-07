#include <stdio.h>
#include <stdlib.h>

int foo(char* napis)
{
    int suma = 0;
    for(int i = 0; napis[i] != 0; i++)
    {
        if((napis[i] >= '\x61' && napis[i] <= '\x7A') || (napis[i] >= '\xE0' && napis[i] <= '\xFE'))
        {
            suma++;
        }
    }
    return suma;
}

int main()
{
    char napis1[] = "różowe kwiatki na łące";
    int wynik = foo(napis1);
    printf("%d", wynik);

    return 0;
}

