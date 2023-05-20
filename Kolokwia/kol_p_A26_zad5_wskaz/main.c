#include <stdio.h>
#include <stdlib.h>

int foo(int m, int n, int* tab)
{
    int wynik = 0;
    for (int i = 0; i < m; i++)
    {
        if (*(tab + i) >= n)
        {
            wynik += 1;
        }
    }
    return wynik;
}

int main()
{
    int n = 8;
    int m = 5;
    int tab[] = {2, 4, 6, 8, 10};
    printf("%d\n", foo(m, n, tab));

    return 0;
}
