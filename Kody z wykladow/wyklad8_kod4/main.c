#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char * slowo;
    //scanf("%s",slowo);
    //printf("%s\n",slowo);
    //debug nie sygnalizuje problemu
    //problem w scanf- mamy wskaźnik bez rezerwacji pamięci

    //rozwiazanie:
    char slowo[20];
    //tworzymy bufor o dużym rozmiarze po to aby bylo tyle miejsca ile znakow bysmy chcieli (+ znak zerowy)
    scanf("%s",slowo);
    //wtedy bez problemu wczytujemy ze scanf
    printf("%s\n",slowo);

    return 0;
}
