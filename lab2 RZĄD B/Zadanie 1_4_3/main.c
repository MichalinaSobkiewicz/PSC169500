#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    printf("Wpisz 3 dodatnie liczby calkowite: ");
    scanf("%d %d %d", &n, &m, &k);

    printf("Wielokrotnosci liczby %d wieksze od &d i mniejsze od %d to: \n");
    for(int i = n; i < k; i += n)
    {
        if(i > m)
        {
            printf("%d \n", i);
        }
    }

    return 0;
}
