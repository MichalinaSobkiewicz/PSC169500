#include <stdio.h>
#include <stdlib.h>

//Napisz program, który wczytuje liczbę całkowitą 𝑘 (𝑘 > 2) ze standardowego wejścia
//i wypisuje na standardowym wyjściu iloczyn liczb nieparzystych z zakresu od 1 do 𝑘
//(tj. 1 ⋅ 3 ⋅ ... ⋅ 𝑘 dla 𝑘 nieparzystych i 1 ⋅ 3 ⋅ ... ⋅ (𝑘 − 1) w przeciwnym przypadku).

int foo(int k)
{
    int wynik=1;
    for(int i=3; i<=k;i+=2)
    {

        wynik *=i;
    }
    return wynik;
}

int main()
{
    int k;
    int wynikfoo=foo(6);
    printf("%d", wynikfoo);
    return 0;
}
