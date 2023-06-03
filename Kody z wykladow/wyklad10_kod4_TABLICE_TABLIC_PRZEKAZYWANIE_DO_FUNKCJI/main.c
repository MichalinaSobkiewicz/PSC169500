#include <stdio.h>
#include <stdlib.h>

//PRZEKAZYWANIE TABLICY TABLIC DO FUNKCJI
void foo(int **tab, int n, int m)
{
    printf("%d\n", tab[0][0]);
    printf("%d\n", tab[1][2]);
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    tab[0][0]= 7; //bezpośrednia deklaracja 7 na miejscu wiersz:1, kolumna:1
    *(*(tab+1)+2)=4; //wskaźnikowa deklaracja 4 na miejscu wiersz:2; kolumna:3
    foo(tab,2,3);
    return 0;
}
