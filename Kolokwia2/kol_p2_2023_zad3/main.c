#include <stdio.h>
#include <stdlib.h>

void odwrocenie(int n,int **tab)
{
    int **tmp = malloc(sizeof(int*)*n);
    //rezerwujesz n adresów przechowujących int-y

    for(int i=0;i<n;i++)
    {
        tmp[i] = malloc(sizeof(int)*n);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tmp[i][j] = tab[i][j];
            //przekazujemy elementy z domyślnej tablicy na tablice tymczasową
        }
    }

    int x = n-1;
    //śledzenie kolumny- od ostatniej do pierwszej

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==1)
            {
                tab[i][j] = tmp[i][x];
                x--;
            }
        }
        x = n-1;
    }
}
void wyswietl(int n,int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("[%d %d] = %d\n",i,j,tab[i][j]);
        }
    }


}
int main()
{
    int **tab = malloc(sizeof(int*)*3);
    tab[0] = malloc(sizeof(int)*3);
    tab[1] = malloc(sizeof(int)*3);
    tab[2] = malloc(sizeof(int)*3);
    tab[3] = malloc(sizeof(int)*3);

    tab[0][0] = 2;
    tab[0][1] = 3;
    tab[0][2] = -3;
    tab[0][3] = 1;
    tab[1][0] = 1;
    tab[1][1] = 4;
    tab[1][2] = 7;
    tab[1][3] = 2;
    tab[2][0] = -3;
    tab[2][1] = -6;
    tab[2][2] = 11;
    tab[2][3] = 3;
    tab[3][0] = -2;
    tab[3][1] = 8;
    tab[3][2] = 23;
    tab[3][3] = 4;

    wyswietl(4,tab);
    printf("-----------------\n");
    odwrocenie(4,tab);
    wyswietl(4,tab);
}

