#include <stdio.h>
#include <stdlib.h>

int foo(const int *a, float b)
{
    if (*a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 7;
    float b = 7.12;

    int wynik = foo(&a, b);
    printf("%d", wynik);
    return 0;
}
