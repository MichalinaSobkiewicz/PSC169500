#include <stdio.h>

void foo(char* napis1, char* napis2) {
    int j = 0;

    for (int i = 1; napis1[i] != 0; i++)
    {
        if (i % 2 == 0)
        {
            napis2[j] = napis1[i];
            j++;
        }
    }
}

int main()
{
    char napis1[] = "Bardzo fajny napis";
    char napis2[100];
    foo(napis1, napis2);
    printf("%s\n", napis1);
    printf("%s", napis2);
    return 0;
}


