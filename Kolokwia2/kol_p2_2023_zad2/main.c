#include <stdio.h>
#include <stdlib.h>


void foo(char* napis)
{
    int i, j;
    for (i = 0, j = 0; napis[i] != 0; i++)
    {
        if (!islower(napis[i]))
        //gdybyśmy chcieli usunac duze litery to !isupper
        {
            napis[j] = napis[i];
            j++;
        }
    }
    napis[j] = '\0';
}

int main()
{
    char napis[] = "Olsztyn TO fAJne MiaSto";
    printf("Przed: %s\n", napis);

    foo(napis);
    printf("Po: %s\n", napis);
    return 0;
}
