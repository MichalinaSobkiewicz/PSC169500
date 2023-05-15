#include <stdio.h>
#include <stdlib.h>

//n- wiersze, m- kolumny
//kod na uniwersalną tablice:
int ** alokuj(int n, int m)
{
    int ** tab= malloc(n* sizeof(int*));
    for(int i=0; i<n; i++)
    {
        tab[i]=malloc(m*sizeof(int));
    }
    return tab;
}

void zwolnij(int ** tab, int n, int m)
//m-argument pozorny
{
    for(int i=0; i<n; i<++)
    {
        free(tab[i]);
    }
    free(tab);
}
int main()
{
    int ** wynik=alokuj(3,4);
    printf("%p\n", wynik);
    zwolnij(wynik, 3,4)
    return 0;
}
