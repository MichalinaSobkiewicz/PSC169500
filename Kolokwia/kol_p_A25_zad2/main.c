#include <stdio.h>
#include <stdlib.h>

//Napisz funkcję, która dostaje jako argument liczbę dodatnią n
//i zwraca jako wartość największą liczbę całkowitą, która podniesiona do kwadratu
//jest mniejsza lub równa𝑛.Rozwiąż zadanie nie wykorzystując funkcji bibliotecznych.
//Stwórz przypadek testowydla funkcji.

int maxSqrt(int n)
{
    int i = 0;
    while (i * i <= n)
    {
        i++;
    }
    return i - 1;
}

int main()
{
    printf("%d\n", maxSqrt(10));
}
