#include <stdio.h>
#include <stdlib.h>

int iloczynpodzielnych(int n, int m, int **tab)
{
    int iloczyn = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tab[i][j] % 3 == 0)
            {
                iloczyn *= tab[i][j];
            }

        }
    }
    return iloczyn;
}

int main()
{
    int **tab = malloc(sizeof(int *) * 3);
    int n = 3;
    int m = 3;
    tab[0] = malloc(sizeof(int) * 3);
    tab[1] = malloc(sizeof(int) * 3);
    tab[2] = malloc(sizeof(int) * 3);
    tab[0][0] = 9; //to
    tab[0][1] = 3; //to
    tab[0][2] = 5;
    tab[1][0] = 1;
    tab[1][1] = 2;
    tab[1][2] = 5;
    tab[2][0] = 6; //to
    tab[2][1] = 5;
    tab[2][2] = 4;
    printf("%d", iloczynpodzielnych(n, m, tab));

    // Zwolnienie pamięci
    for (int i = 0; i < n; i++)
    {
        free(tab[i]);
    }
    free(tab);

    return 0;
}

