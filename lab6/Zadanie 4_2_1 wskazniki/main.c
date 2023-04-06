#include <stdio.h>
#include <stdlib.h>


void funkcja(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        *(tab+i)= 0;
    }
}

void wyswietlanietablicy(int n, *tab[])
{
    for (int i=0; i < n; i++)
    {
        printf("[%d]=%d\n", i, *(tab+i);
    }
printf("---\n");
}

int main()
{
    int *tab2= malloc(5*sizeof(int));
    #rezerwacja miejsca dla odpowiedniej ilosci zmiennych
    tab1[0]= 2;
    tab1[1]= -9;
    tab1[2]= -4;
    tab1[3]= 6;
    tab1[4]= 7;
    tab1[5]= 19;
    funkcja(5, tab2);
    wyswietlanietablicy(5,tab2);
    return 0;
}
