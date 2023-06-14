#include <stdio.h>
#include <stdlib.h>

int is_positive(int el)
{
    if (el%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int positive_count(int (*is_positive)(int), int n, int tab[n])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_positive(tab[i]) != 0)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    int n = 6;
    int tablica[] = {2, 5, 3, 9, 4, 7};

    int wynik = positive_count(is_positive, n, tablica);
    printf("%d\n", wynik);

    return 0;
}
