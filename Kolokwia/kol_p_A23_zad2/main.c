#include <stdio.h>
#include <stdlib.h>

//Napisz program, który wczytuje liczbę całkowitą 𝑚 (𝑚 > 2) ze standardowego wejścia
//i wypisuje na standardowym wyjściu sumę liczb parzystych z zakresu od 2 do 𝑚 (tj.
//2 + 4 + ... + 𝑚 dla 𝑚 parzystych i 2 + 4 + ... + (𝑚 − 1) w przeciwnym przypadku).

int foo(int m)
{
    int wynik =0;

    for(int i=2; i<=m; i+=2)
    {
        wynik+=i;
    }
    return wynik;
}

int main()
{
    int m;
    int wynikfoo=foo(6);
    printf("%d", wynikfoo);
    return 0;
}
