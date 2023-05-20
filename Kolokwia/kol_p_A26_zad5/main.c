#include <stdio.h>
#include <stdlib.h>

int foo (int m, int n, int tab[m])
{
    int wynik=0;
    for(int i=1; i<m;i++)
    {
        if(tab[i]>=n)
        {
            wynik +=1;
        }
    }
    return wynik;
}
int main()
{
    int n= 8;
    int m=5;
    int tab[]= {2,4,6,8,10};
    printf("%d\n", foo(5, n, tab));

}
