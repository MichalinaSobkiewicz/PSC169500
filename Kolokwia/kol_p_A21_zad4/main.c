#include <stdio.h>
#include <stdlib.h>
//sypie sie dla 4
int foo(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n%3==0)
    {
        return foo(n/3)+1;
    }
    if(n%3==1)
    {
        return 2*foo(n/3);
    }
    else
    {
        return foo(n-2)-1;
    }
}
int main()
{
    printf("%d\n", foo(5));
}
