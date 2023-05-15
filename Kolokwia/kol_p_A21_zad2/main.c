#include <stdio.h>
#include <stdlib.h>

//Napisz funkcję, która przyjmuje dwa argumenty:
//dodatnią liczbę całkowitą 𝑛 oraz dodatnią liczbę wymierną x.
//Funkcja ma zwrócić obliczoną wartość wyrażenia:
//1 - (x^2 / 2) + (x^4 / 4) - (x^6 / 6) + ... + (-1)^n (x^2n/2n)


double obliczWyrazenie(int n, double x) {
    double wynik = 1;
    int znak = -1;

    for (int i = 1; i <= n; i++) {
        double potega = pow(x, 2*i);
        double mianownik = 2*i;
        double wyraz = znak * (potega / mianownik);
        wynik += wyraz;
        znak *= -1;
    }

    return wynik;
}

int main() {
    int n;
    double x;

    double wynik = obliczWyrazenie(2, 2);

    printf("Wynik wyrazenia: %lf\n", wynik);

    return 0;
}
