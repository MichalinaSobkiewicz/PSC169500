#include <stdio.h>
#include <stdlib.h>

int suma(int n,int **tab)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[i][j]%2 == 0)
            {
                suma+=tab[i][j];
            }
        }
    }
    return suma;
}


int main()
{
    int **tab = malloc(sizeof(int*)*2);
    tab[0] = malloc(sizeof(int)*2);
    tab[1] = malloc(sizeof(int)*2);
    tab[0][0] =14;
    tab[0][1] =5;
    tab[1][0] =7;
    tab[1][1] =12;
    printf("%d",suma(2,tab));
}
