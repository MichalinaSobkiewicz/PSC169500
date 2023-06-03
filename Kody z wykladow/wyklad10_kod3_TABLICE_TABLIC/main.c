#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Inicjalizacja tablicy tablic
    int **tab = (int**) malloc(sizeof(int*)*2);
    //rozum to tak- mamy zarezerwować dwa adresy, które przechowują int-y
    //mamy zarezerwiwany blok 16 bajtów- po 8 bajtów na każdą ze zmiennych  (int ma 4 bajty)

    tab[0]=(int*) malloc(sizeof(int)*3);
    //wiersz pierwszy- trzy kolumny

    tab[1]=(int*) malloc(sizeof(int)*3);
    //wiersz drugi- trzy kolumny

    //DOBRA PRAKTYKA:
    //kolejność uwalniania- odwrotna
    free(tab[0]);
    free(tab[1]);
    //w pierwszej kolejności- zwalniamy kolumny
    free(tab);
    //w drugiej kolejności- zwalniamy wiersze


    return 0;
}
