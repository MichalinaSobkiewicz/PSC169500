#include <stdio.h>
#include <stdlib.h>

int funkcja(int n)
{
    if(n>=0)
        return n;

    //else - względnie!!!
    return -n;
}
int main()
{
    printf("Podaj liczbe calkowita\n");
    return 0;
}
