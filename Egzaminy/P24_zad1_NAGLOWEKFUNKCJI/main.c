#include <stdio.h>
#include <stdlib.h>

int fun(const int * a, const int * b)
{
    if(*a==*b)
    {
        return 0;
    }
    if(*a>*b)
    {
        return 1;
    }
    else
    {
        return -1;
    }

}
int main()
{
    int a= 7;
    int b= 7;
    int wynik= fun(&a, &b);
    printf("%d",wynik);
}
