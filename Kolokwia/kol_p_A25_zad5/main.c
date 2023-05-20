#include <stdio.h>
#include <stdlib.h>

int sum_odd(int n, int tab[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] % 2 != 0)
        {
            sum += tab[i];
        }
    }
    return sum;
}

int main()
{
    int tab[] ={4,5,9,3};
    printf("%d\n", sum_odd(4, tab));
    return 0;
}
