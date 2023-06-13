#include <stdio.h>
#include <stdlib.h>

int iloczynpodzielnych(int m, int n, int tab[m])
{
    int iloczyn=1;

    for(int i=0; tab[i]!=0; i++)
    {
        if(tab[i]%n == 0)
        {
            iloczyn = iloczyn* tab[i];
        }
    }
    return iloczyn;
}
int main()
{
    int m=5;
    int n=3;
    int tablica[]={2,9,15,6,8};

    for (int i = 0; i < m; i++)
    {
        printf("%d \n", *(tablica + i));
    }


    printf("----");
    int wynik= iloczynpodzielnych(m,n,tablica);
    printf("\n %d", wynik);

    return 1;



}
