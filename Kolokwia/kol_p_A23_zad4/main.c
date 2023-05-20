#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    if(n%3==0)
    {
        return foo(n/3)+1;
    }
    if(n%3==1)
    {
        return foo(n/3)+2;
    }
    else
    {
        return foo(n-1)+1;
    }
}
int main()
{
    printf("%d\n", foo(8));
}
