#include <stdio.h>
#include <stdlib.h>

double foo(int n, double x)
{
    double wynik = 1;
    for(int i=1; i<=n;i++)
    {
        double wyraz= pow(x, 2*i) / (2*i);

        if(i%2==0)
        {
            wynik = wynik+wyraz;
        }
        else
        {
            wynik = wynik-wyraz;
        }

    }
    return wynik;
}
int main()
{
    int n;
    double x;

    double przypadektestowy=foo(1,1);
    printf("%lf",przypadektestowy);
    return 0;
}
