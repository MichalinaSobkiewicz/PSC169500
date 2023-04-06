#include <stdio.h>
#include <stdlib.h>

void funkcja(int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        tab[i]= (tab[i]*2);
    }
}

void wyswietlanietablicy(int n, int tab[])
{
    for (int i=0; i < n; i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
printf("---\n");
}

int main()
{
    int tab1[]= {4,1,2};
    int tab2[]= {-1,2,-9,3,5,1,-3};
    funkcja(3, tab1);
    funkcja(7, tab2);
    wyswietlanietablicy(3,tab1);
    wyswietlanietablicy(7,tab2);
    return 0;
}

