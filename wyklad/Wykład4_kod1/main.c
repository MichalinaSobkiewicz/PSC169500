#include <stdio.h>
#include <stdlib.h>

int main (void)
{

int liczba =5;
printf("Wartość zmiennej: %d\n", liczba );
printf("Adres zmiennej: %p\n",&liczba );
//wyświetlanie adresu zmiennej-wartość %p
printf("Adres zmiennej: %#010x\n",&liczba );
return0;
}
