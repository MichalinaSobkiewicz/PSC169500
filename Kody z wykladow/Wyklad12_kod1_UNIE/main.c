#include <stdio.h>
#include <stdlib.h>
//Unia (ang. union) jest typem, który pozwala przechowywać różne rodzaje danych w tym samym obszarze pamięci (jednak nie równocześnie).
 //rozmiar unii- rozmiar najwiekszej składowej
 //jest to analogiczne do struktur
 union Nazwa
 {
   typ1 nazwa1;
   typ2 nazwa2;
   /* ... */
 };

int main()
{
    printf("Hello world!\n");
    return 0;
}
