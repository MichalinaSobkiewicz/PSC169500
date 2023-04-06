#include <stdio.h>
#include <stdlib.h>

int* funkcja(int*a, int*b)
{
    if(*a>*b)
        return b;
    return a;
}

int main()
{
    int a = 5, b = 9;
    printf("adres a %p\n", &a);
    printf("adres b %p\n", &b);
    printf("%p\n", funkcja(&a, &b));
    return 0;
}
