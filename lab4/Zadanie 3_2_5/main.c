#include <stdio.h>
#include <stdlib.h>

int suma (const int* a, const int* b)
{
    return (*a) + (*b);
}

int main()
{
    int a =2, b = -6;
    printf("%d\n", suma(&a, &b));
    return 0;
}
