#include <stdio.h>
#include <stdlib.h>


int foo(char* napis, char znak)
{
    int indeks=0;
    for(indeks; napis[indeks] != 0; indeks++)
    {
        if(napis[indeks]==znak)
        {
            return indeks;
        }
        else
        {
            return NULL;
        }
    }
}
int main()
{
    char* napis= "ala ma kota";
    char znak= 't';

    int wynik= foo(napis, znak);
    printf("%d", wynik);
}
