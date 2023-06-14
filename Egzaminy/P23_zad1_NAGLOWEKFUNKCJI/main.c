#include <stdio.h>
#include <stdlib.h>

int * foo(char*napis1, char*napis2)
{
    int i =0;
    int j=0;

    int dlugosc=0;
    while(napis1[i]!=0)
    {
        dlugosc++;
        i++;
    }
    while(napis2[j]!=0)
    {
        dlugosc++;
        j++;
    }
    return dlugosc;
}
int main()
{
    char nap1[]= "Pierwszy napis";
    char nap2[]= "Drugi napis";
    int wynik= foo(&nap1,&nap2);
    printf("%d", wynik);

}
