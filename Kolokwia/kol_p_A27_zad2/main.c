#include <stdio.h>
#include <stdlib.h>

double calculateValue(int n, double x)
{
    double wynik=1;
    for(int i=1; i <=n; i++)
    {
        double wyraz = pow(x, 4*i) / (4*i);

         if(i%2==0)
            {
                wynik = wynik + wyraz;
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
    int x;

    double PrzypadekTestowy= calculateValue(2,2);
    printf("%lf", PrzypadekTestowy);
}
