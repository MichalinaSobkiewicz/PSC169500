#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char napis[20]= "Olsztyn";
    printf("%Iu\n", strlen(napis));
    //Wyswietlanie dlugosci napisu
    char napis1[20]= "Olsz/tyn";
    printf("%Iu\n", strlen(napis1));
    return 0;
}
