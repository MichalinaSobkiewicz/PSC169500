#include <stdio.h>
#include <stdlib.h>

//Napisz funkcję, która dostaje jako argument liczbę dodatnią 𝑛 i zwraca jako wartość
//najmniejszą liczbę całkowitą, która podniesiona do kwadratu jest większa lub równa 𝑛.
//Rozwiąż zadanie nie wykorzystując funkcji bibliotecznych. Stwórz przypadek testowy
//dla funkcji.


int maxSqrt(int n)
{
    int i=1;
    while(i*i<n)
   {
       i++;
   }
   return i;
}

int main()
{
    printf("%d\n", maxSqrt(35));
}
