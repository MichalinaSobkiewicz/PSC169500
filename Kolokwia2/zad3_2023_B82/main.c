#include <stdio.h>
#include <stdlib.h>

int najwiekszydodatni(int n, int m, int **tab)
{
    int najwiekszy = tab[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tab[i][j] > najwiekszy)
            {
                najwiekszy = tab[i][j];
            }
        }
    }

    if (najwiekszy < 0)
    {
        return -1;
    }

    return najwiekszy;
}

int main()
{
    int n = 2;
    int m = 2;
    int **tab = malloc(sizeof(int *) * n);
    tab[0] = malloc(sizeof(int) * m);
    tab[1] = malloc(sizeof(int) * m);

    tab[0][0] = -1;
    tab[0][1] = -1;
    tab[1][0] = 9;
    tab[1][1] = 12;

    int wynik = najwiekszydodatni(n, m, tab);
    printf("%d\n", wynik);


    for (int i = 0; i < n; i++)
    {
        free(tab[i]);
    }
    free(tab);

    return 0;
}
