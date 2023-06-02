#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nap1[]="Hello World";
    char nap2[50]="Hello World";

    printf("%Iu\n",sizeof nap1);
    // w przypadku gdy wielkość napisu nie jest określana, nadawana jest automatycznie
    // sizeof zwraca 12 (z nadmiarem o 1 bajt- ten znak to ten znak zerowy na końcu)
    printf("%Iu\n",strlen(nap1));
    //strlen zwraca dokładną ilość znaków bez ostatniego \0

    printf("%Iu\n",sizeof nap2);
    //w przypadku zadeklarowania długości napisu sizeof zwraca wielkość tablicy

    printf("%Iu\n",strlen(nap2));
    //strlen niezmiennie zwraca dokładną ilość
    return 0;
}
