#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);

    int silnia = 1;
    //przypisujemy silni wartosc poczatkowa 1

    for(int i = 1; i <= n; i++)
    {
        silnia *= i;
    }
    //aby pozniej mnozyc wartosc poczatkowa razy kolejne liczby calkowite z iteratora az do n
    printf("Silnia z podanej liczby to: %d", silnia);
    return 0;
}
