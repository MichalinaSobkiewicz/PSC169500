#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Podaj kolejno liczby calkowite n i m ");
    scanf("%d %d", &n, &m);

    while (n!=m)
    {
        if (n>m)
        {
            n-=m;
        }
        //jezeli n jest wieksze od m, to od n odejmujemy m az do momentu kiedy n bedzie rowne m

        else if (m>n)
        {
            m -= n;
        }
        //sytuacja odwrotna do powyzszej, kiedy druga liczba jest wieksza od pierwszej
        //tu moglby byc sam else, ale dla wiekszej czytelnosci i zrozumienia analogii dalam warunek
    }

    printf("Najwiekszy wspolny dzielnik podanych liczb to: %d\n", n);

    return 0;
}
