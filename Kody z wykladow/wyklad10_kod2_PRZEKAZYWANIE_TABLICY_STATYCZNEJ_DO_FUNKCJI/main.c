#include <stdio.h>
#include <stdlib.h>

//przekazywanie tablicy do funkcji
//Przechodzimy przez funkcje przez przekazanie rozmiarów
//musimy pokazać który wymiar odpowiada za co, ewentualnie pominąć pierwszy  z nich (patrz pętla niżej)
void foo1(int n, int m, int tab[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
}

//pomijanie pierwszego rozmiaru
void foo2(int n, int m, int tab[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};
    foo1(2,3,tab);


    foo2(2,3,tab);
    return 0;
}
