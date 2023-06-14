#include <stdio.h>
#include <stdlib.h>

int sumaindeksow(int n, int tab[n][n]) {
    int najmniejszy = tab[0][0];
    int suma = 0;
    int indeks_i = 0;
    int indeks_j = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tab[i][j] < najmniejszy) {
                najmniejszy = tab[i][j];
                indeks_i = i;
                indeks_j = j;
            }
        }
    }

    suma = indeks_i + indeks_j;
    return suma;
}

int main() {
    int n = 3;
    int tablica[3][3] = {{5, 3, 8}, {4, 1, 5}, {5, 7, 8}};
    int wynik = sumaindeksow(n, tablica);
    printf("%d", wynik);

    return 0;
}
