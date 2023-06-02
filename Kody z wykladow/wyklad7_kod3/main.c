#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//GCC często samo dodaje biblioteki, ale dodanie include'a zniweluje ostrzeżenie

#define NAPIS "jakiś tekst"

int main()
{
    char tab[]= NAPIS;
    const char*wsk = NAPIS;
    printf("adres napisu %p\n","jakiś tekst");
    // napisy używane w kodzie nazywamy stałymi łańcuchowymi bo znajdują się w pamięci stałej
    // gdy w kodzie źródłowym występuje taki sam napis (w różnych kontekstach), to nadal odnosi się do tego samego miejsca w pamięci

    printf("adres tab: %p\n", tab);

    printf("adres wsk: %p\n", wsk);
    //tu ten sam adres, który był wcześniej- odwołujemy się do tego samego miejsca w pamięci
    //mimo, ze nie jest to tym samym

    printf("adres NAPIS-u: %p\n", NAPIS);
}
