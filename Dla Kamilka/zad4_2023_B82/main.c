#include <stdio.h>
#include <string.h>

struct Pralka
{
    char model[15];
    int licznikPrania;
};

void zrobPranie(struct Pralka* pralka)
{
    pralka->licznikPrania += 1;
}

int main()
{
    struct Pralka pralka1 = {"Beco A26", 14};
    struct Pralka pralka2 = {"Samsung 991", 21};
    struct Pralka pralka3 = {"Whirlpool 221", 11};

    zrobPranie(&pralka1);
    zrobPranie(&pralka2);
    zrobPranie(&pralka3);

    printf("Licznik prania dla pralki 1: %d\n", pralka1.licznikPrania);
    printf("Licznik prania dla pralki 2: %d\n", pralka2.licznikPrania);
    printf("Licznik prania dla pralki 3: %d\n", pralka3.licznikPrania);

    return 0;
}

