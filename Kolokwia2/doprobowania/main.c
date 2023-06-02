#include <stdio.h>
#include <stdbool.h>

int foo(char* napis1, char* napis2)
{
    int temp = 0;
    for (int i = 0; napis1[i] != '\0'; i++)
    {
        if (napis1[i] == 'a' || napis1[i] == 'e' || napis1[i] == 'i' || napis1[i] == 'o' || napis1[i] == 'u' ||
            napis1[i]=='A'|| napis1[i]=='E' || napis1[i]== 'I' || napis1[i]== 'O' || napis1[i]== 'U')

        {
            temp++;
        }
    }
    for (int i = 0; napis2[i] != '\0'; i++)
    {
        if (napis2[i] == 'a' || napis2[i] == 'e' || napis2[i] == 'i' || napis2[i] == 'o' || napis2[i] == 'u'||
            napis2[i]=='A'|| napis2[i]=='E' || napis2[i]== 'I' || napis2[i]== 'O' || napis2[i]== 'U')

        {
            temp++;
        }
    }
    return temp;
}

int main()
{
    char napis1[] = "Przykladowy tekst do sprawdzenia";
    char napis2[] = "INNY PRZYKLADOWY TEKST DO SPRAWDZENIA";

    int ilosc = foo(napis1, napis2);
    printf("%d", ilosc);
    return 0;
}
