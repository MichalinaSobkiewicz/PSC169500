#include <stdio.h>
#include <stdlib.h>


int foo(char* napis, char znak)
{
    int temp = 0;

    for (int i = 0; napis[i] != 0; i++)
        {
        if (napis[i] == znak)
        {
            temp++;
        }
    }
    return temp;
}

int main()
{
    char napis[] = "Olsztyn";
    char znak = 's';
    int wystapienia = foo(napis, znak);
    printf("Podany znak wystepuje w napisie %d raz/razy \n", wystapienia);
    return 0;
}
