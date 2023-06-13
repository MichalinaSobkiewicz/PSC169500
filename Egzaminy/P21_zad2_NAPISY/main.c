#include <stdio.h>

void zamien(char* nap)
{
    int i = 0;

    for (i = 0; nap[i] != '\0'; i++)
    {
        if (nap[i] >= '\x41' && nap[i] <= '\x5A')
        {
            nap[i] = '\x40';
        }
    }

    int j = 0;
    int k = 0;

    while (nap[j] != '\0')
    {
        if (nap[j] != '\x40')
        {
            nap[k] = nap[j];
            k++;
        }
        j++;
    }

    nap[k] = 0;
}

int main() {
    char napis1[] = "BardDZO FajnY NapIS";

    zamien(napis1);

    printf("%s", napis1);

    return 0;
}

