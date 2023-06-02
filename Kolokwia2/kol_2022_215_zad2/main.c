#include <stdio.h>
#include <stdlib.h>

int foo(char* napis1, char* napis2)
{
    int temp1 = 0;
    int temp2 = 0;
    int ilosccyfr = 0;

    for (int i = 0; napis1[i] != 0; i++)
    {
        temp1++;
    }
    for (int i = 0; napis2[i] != 0; i++)
    {
        temp2++;
    }

    int krotszynapis;
    if (temp1 < temp2 || temp1==temp2)
    {
        krotszynapis = temp1;
    }
    else
    {
        krotszynapis = temp2;
    }

    for (int i = 0; i <= krotszynapis; i++)
    {
        if (napis1[i] >= '0' && napis1[i] <= '9')
        {
            ilosccyfr++;
        }
    }
    return ilosccyfr;
}

int main()
{
    char napis1[] = "krtki brdz fjn nps135";
    char napis2[] = "dlugi bardzo fajny napis 1374";

    int wynik = foo(napis1, napis2);
    printf("%d", wynik);
    return 0;
}

