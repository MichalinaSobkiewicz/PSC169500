#include <stdio.h>
#include <stdlib.h>

float sum(char* a, float* b) {
    int dlugosc = 0;

    while (a[dlugosc] != '\0') {
        dlugosc++;
    }

    float wynik = *b + dlugosc;

    return wynik;
}

int main() {
    char napis[] = "Niebieski kwiat i kolce";
    float liczba = 12.5;

    printf("%lf", sum(napis, &liczba));

    return 0;
}

