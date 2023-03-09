#include <stdio.h>
#include <stdlib.h>

int potega(int podstawa, int wykladnik)
{
    int temp=1;
    for(int i=1;i<=wykladnik;i++)
    {
        temp *= podstawa;
    }
    return temp;
}

int czescCalkPierw(int liczba, int stopien)
{
    int i=0;
    while(potega(i, stopien) <=liczba)
    {
        i++;
    }
    return i-1;
}

int sumaCzesci(int n, int m)
{
    int temp=0;
    for(int i=0;i<=n;i++)
    {
        temp += czescCalkPierw(i, m);
    }
    return temp;
}

int main()
{
    printf("%d\n", potega(1,2));
    printf("%d\n", czescCalkPierw(10,2));
    printf("%d\n", sumaCzesci(5,6));
    return 0;
}
