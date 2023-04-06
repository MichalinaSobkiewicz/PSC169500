#include <stdio.h>
#include <stdlib.h>

void dod (int n, int tab1[], int tab2[], int tab3[])
{
    for (int i = 0; i < n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    }
}

void wypisz(int tab[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
}

int main()
{
    int taba[]= {1,1,1,1,1};
    int tabb[]= {2,2,2,2,2};
    int tabc[5];
    dod(5,taba,tabb,tabc);
    wypisz(tabc, 5);
}
