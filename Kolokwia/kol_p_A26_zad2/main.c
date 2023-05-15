#include <stdio.h>
#include <stdlib.h>

double calculateSeriesSum(int n, double x)
{
    double wynik = 1;
    int znak = -1;

    for(int i=0; i<=n; i++)
    {
        double licznik = pow(x, 2*i+1);
        double mianownik= (2*i +1);
        double wyraz = znak * (licznik/mianownik);
        wynik += wyraz;
        znak *= -1;

    }
}
int main()
{
  int n;
  double x;

  double wynikfunkcji= calculateSeriesSum(2,3);
  printf("%d", wynikfunkcji);
  return 1;
}
