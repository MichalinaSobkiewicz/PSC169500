#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Podaj dwie liczby calkowite dodatnie: ");
    scanf("%d %d", &n, &m);

    printf("Pierwsze %d wielokrotnosci liczby %d to: ", m, n);
    for(int i = 1; i <= m; i++)
    {
        printf("%d ", n*i);
    }

    return 0;
}
