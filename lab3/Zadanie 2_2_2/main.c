#include <stdio.h>
#include <stdlib.h>

int silnia(int liczba)
{
    int sil=1;
    for(int i = 2; i <= liczba; i++)
    {
        sil *= i;
    }
    return sil;
}
int main()
{
    int n;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &n);
    printf("silnia z podanej liczby to %d", silnia(n));
    return 0;
}
