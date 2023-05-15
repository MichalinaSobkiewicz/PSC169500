#include <stdio.h>
#include <math.h>

double obliczWyrazenie(int n, double x) {
    double wynik = 1.0;
    int i = 1;
    int znak = -1;

    while (i <= n) {
        double potega = pow(x, 2*i);
        double mianownik = 2*i;
        double wyraz = znak * (potega / mianownik);
        wynik += wyraz;
        znak *= -1;
        i++;
    }

    return wynik;
}

int main() {
    int n;
    double x;

    printf("Podaj liczbe calkowita dodatnia n: ");
    scanf("%d", &n);

    printf("Podaj liczbe wymierna dodatnia x: ");
    scanf("%lf", &x);

    double wynik = obliczWyrazenie(n, x);

    printf("Wynik wyrazenia: %.2lf\n", wynik);

    return 0;
}
