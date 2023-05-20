#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    if(n==0||n==1)
    {
        return 2;
    }
    if(n%2==0)
    {
        return foo(n-1)+3;
    }
    else
    {
        return foo(n-2)+4;
    }
}
int main()
{

    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    printf("%d\n", foo(6));
    printf("%d\n", foo(7));
    printf("%d\n", foo(8));
}
