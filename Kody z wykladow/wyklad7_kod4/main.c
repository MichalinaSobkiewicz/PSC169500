#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nap1[]="absddfvjskjf";
    char*nap2 ="oijefj";
    nap1[4]='M';
    //modyfikacja poszczególnych znaków dla pierwszego napisu o indeksie 4
    *(nap1 +7)='M';
    //dostep do 7 znaku drugiego napisu (na wskaźniku)

    nap2[2]='3'; //czy to zawsze możliwe?
    //unexpected behaviour (czasem zwraca- przechodzi do innego zakresu zmiennych, ale nie zawsze- nie zmodyfikujemy pamieci stałej)
    // gdy dodamy const przed charem (tak poprawnie), to kod się nie wykona (właściwość charakterystyczna dla wskaźników na stałą wartość)

    return 0;
}
