#include <stdio.h>
#include <stdlib.h>

int najwiekszyelementparzysty(int n, int m, int**tab)
{
    int wynik=tab[0][0];

    for(int i=0; i < n; i+=2)
    {
        for(int j=0; j <n; j+=2)
        {
            if(tab[i][j]>wynik)
            {
                wynik=tab[i][j];
            }
        }
    }


    return wynik;
}

int main()
{
    int n=3;
    int m=3;
    int **tab=malloc(sizeof(int*)*n);
    tab[0]=malloc(sizeof(int)*m);
    tab[1]=malloc(sizeof(int)*m);
    tab[2]=malloc(sizeof(int)*m);
    tab[0][0]=12;
    tab[0][1]=14;
    tab[0][2]=16;
    tab[1][0]=18;
    tab[1][1]=20;
    tab[1][2]=22;
    tab[2][0]=24;
    tab[2][1]=26;
    tab[2][2]=28;
    int wynik=najwiekszyelementparzysty(n,m,tab);
    printf("%d\n", wynik);

    return 0;
}
