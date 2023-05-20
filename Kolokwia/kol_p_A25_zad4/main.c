#include <stdio.h>
#include <stdlib.h>

int bar(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    if(n%2==0)
    {
        return bar(n-1)+2;
    }
    else
    {
        return bar(n-2)+3;
    }
}
int main()
{
    printf("%d\n", bar(1));
    printf("%d\n", bar(4));
    printf("%d\n", bar(5));
    return 0;
}
