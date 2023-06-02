#include <stdio.h>
#include <stdlib.h>

//NAPIS- ciąg składający się z conajmniej jednego znaku
//Znaki cudzysłowiu nie są częścią łańcucha naszego napisu
//W C nie ma stringa, wszystkie napisy są traktowane jako tablice char
//Ostatnim znakiem w tablicy jest \0
//np gdy zapisujemy "ABC" potrzebujemy tablicy czteroelementowej

int main()
{
    char a = 'q';
    //to znak
    //zwykły char zapisujemy w apostrofach
    //to co widać w watches przed q w zmiennej a to decimal z ASCII

    char b[]= "q";
    // to napis
    // kiedy traktujemy jako tablice znaków, piszemy w cudzysłowie
    // 'costam' =/= "costam" TO NIE JEST ANALOGICZNE JAK W PYTHONIE!

    return 0;
}
