#include <stdio.h>

int *foo(char *napis1, char *napis2) {
    printf("Napis 1: %s\n", napis1);
    printf("Napis 2: %s\n", napis2);

    // Przykładowa implementacja - zwraca wskaźnik na wartość całkowitą 42
    int *result = malloc(sizeof(int));
    *result = 42;
    return result;
}

int main() {
    char *napis1 = "Hello";
    char *napis2 = "World";

    int *wynik = foo(napis1, napis2);
    printf("Wynik: %d\n", *wynik);

    free(wynik);
    return 0;
}
