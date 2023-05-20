#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0; i<=n;i++)
    {
        if(tab[i]%2 != 0)
        {
            tab[i]= tab[i] * tab[i];
        }
    }
}
int main()
{
    int n = 5;
    int tab[] = {-2,-1,1,3,-5};
    foo(n, tab);

    for (int i = 0; i < n; i++) {
        printf("%d ", *(tab + i));
    }

    return 0;
}
