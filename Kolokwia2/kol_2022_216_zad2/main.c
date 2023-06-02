#include <stdio.h>
#include <stdlib.h>


int foo(char* napis1, char* napis2)
{
    int ilesamoglosek=0;

    for(int i=0; napis1[i] != 0; i++)
    {
        if (napis1[i] == 'a' ||napis1[i] == 'e' ||napis1[i] == 'i' ||napis1[i] == 'o' ||napis1[i] == 'u')
        {
            ilesamoglosek++;
        }
    }

    for(int i=0; napis2[i] != 0; i++)
    {
        if (napis2[i] == 'a' ||napis2[i] == 'e' ||napis2[i] == 'i' ||napis2[i] == 'o' ||napis2[i] == 'u')
        {
            ilesamoglosek++;
        }
    }

    return ilesamoglosek;

}

int main()
{
    char napis1[] = "ala ma kota";
    char napis2[] = "bartek ma psa";

    int wynik = foo(napis1, napis2);
    printf("%d", wynik);
    return 0;
}
