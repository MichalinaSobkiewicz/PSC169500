#include <stdio.h>
#include <stdlib.h>

int wiersz(int n,int **tab)
{
    int wynik = tab[0][0];
    //poczatkowo ustalamy wynik na tablice element 1x1

    int pom = 0;
    //tworzymy zmienną, która bedzie nam przechowywać najwiekszy element

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[i][j] >= wynik)
            {
                pom = i;
                //zwracany ma być indeks wiersza, wiec nasze pom=i
                //gdyby pytali o indeks kolumny; pom=j;
                wynik = tab[i][j];
            }
        }
    }
    return pom;
}

void wyswietl(int n,int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("[%d %d]= %d\n",i,j,tab[i][j]);
        }
    }
    printf("--------------------------------------------------\n");

}
int main()
{
    int **tab = malloc(sizeof(int*)*2);
    tab[0] = malloc(sizeof(int)*2);
    tab[1] = malloc(sizeof(int)*2);
    tab[0][0] =2;
    tab[0][1] =30;
    tab[1][0] =1;
    tab[1][1] =2;
    printf("%d",wiersz(2,tab));


}
