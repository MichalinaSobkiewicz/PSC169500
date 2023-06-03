#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[n][n])
{
    int najmniejszyindeks = 0;
    int najmniejszawartosc = tab[0][0];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
             if (tab[i][j] < najmniejszawartosc)
                {
                    najmniejszawartosc = tab[i][j];
                    najmniejszyindeks = j;
                }
        }
    }

    return najmniejszyindeks;
}

int main()
{
    int n = 3;
    int tab[3][3] = {{1, 2, 3}, {-4, 5, -10}, {7, -25, 9}};
    int wynik = foo(n, tab);
    printf("%d\n", wynik);

    return 0;
}



