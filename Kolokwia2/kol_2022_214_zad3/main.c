#include <stdio.h>
#include <stdlib.h>

int sumakol(int n,int **tab)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j%2 != 0 || j==0)
            {
                suma+=tab[i][j];
            }

        }
    }
    return suma;
}


int main()
{
    int **tab = malloc(sizeof(int*)*3);
    tab[0] = malloc(sizeof(int)*3);
    tab[1] = malloc(sizeof(int)*3);
    tab[2] = malloc(sizeof(int)*3);
    tab[0][0] =9; //to
    tab[0][1] =6; //to
    tab[0][2] =5;
    tab[1][0] =1; //to
    tab[1][1] =2; //to
    tab[1][2] = 5;
    tab[2][0]= 3; //to
    tab[2][1]= 5; //to
    tab[2][2]= 4;
    printf("%d",sumakol(3,tab));
}
