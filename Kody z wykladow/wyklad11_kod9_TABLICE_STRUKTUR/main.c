#include <stdio.h>
#include <stdlib.h>

struct Struktura
{
  int pole1;
  double pole2;
  char pole3;
};

int main()
{
    //deklaracja typu tablicowego
    struct Struktura tabS[5];

    //deklaracja zmiennej
    struct Struktura zm;

    //przypisanie wartosci
    tabS[1] = zm;
}
