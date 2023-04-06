#include <stdio.h>
#include <stdlib.h>

void przep(int n, int tab1[], int tab2[], int tab3[])
{
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] > tab2[i])
        {
            tab3[i] = tab1[i];
        }
        else
        {
            tab3[i] = tab2[i];
        }
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
    int taba[]= {1,5,2,7,2,6};
    int tabb[]= {2,8,3,7,3,8,4};
    int tabc[6];
    przep(6,taba,tabb,tabc);
    wypisz(tabc, 6);
}
