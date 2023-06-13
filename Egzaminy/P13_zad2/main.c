#include <stdio.h>

int predicate(int el)
{
    if (el > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int count_if(int (*predicate)(int), int n, int tab[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (predicate(tab[i]) != 0)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    int tablica[] = {-1, 2, -3, 4, -5};
    int rozmiar = 5;

    int wynik = count_if(predicate, rozmiar, tablica);
    printf("%d\n", wynik);

    return 0;
}

