#include <stdio.h>
#include <stdlib.h>

int suma(int n,int **tab)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[i][j]%3 == 0)
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
    tab[0][0] =9;
    tab[0][1] =6;
    tab[1][0] =1;
    tab[1][1] =2;
    printf("%d",suma(2,tab));
}
