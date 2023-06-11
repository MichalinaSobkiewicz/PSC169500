#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab1[n], int tab2[n])
{
    int sum1= 0;
    int sum2= 0;

    for(int i=1; i<n; i++)
    {
        if(tab1[i]%2==0)
        {
            sum1= sum1+ tab1[i];
        }
        if(tab2[i]%2== 0)
        {
            sum2= sum2+tab2[i];
        }
    }

    if(sum1==sum2)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}


int main()
{
    int tab1[]= {4,6,7,7};
    int tab2[]= {4,6,7,7};

    int n=4;

    int wynik= foo(n,tab1,tab2);

    printf("%d", wynik);

}
