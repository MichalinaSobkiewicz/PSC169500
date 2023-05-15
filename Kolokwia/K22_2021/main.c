#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//tu błąd gdzies


//------ZADANIE 2-----
int silnia(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*silnia(n-1);
}

double foo(int n, double x)
{
    double temp =0;
    for(int i=0;i<=n;i++)
    {
        temp += pow(x, i) / silnia(i);
    }
    return temp;
}



//-----ZADANIE 3------
//Napisz funkcje foo, która ma dwa argumenty. Pierwszym argumentem jest wskaznik wsk1 na stała
//wartosc typu float, drugim argumentem jest stały wskaznik wsk2 na zmienna typu float. Funkcja
//foo ma zwrócic liczbe całkowita zawierajaca informacje ile bajtów jest pomiedzy adresami przekazanymi
//do funkcji. Stwórz dwa przypadki testowe.

int fun(float const * wsk1, float* const wsk2)
{
    return (wsk1-wsk2) * sizeof(float);
}


//-----ZADANIE 5-----
//Napisz funkcje, która otrzymuje dwa argumenty: dodatnia liczbe całkowita n oraz n-elementowa tablice
//tab o elementach typu int. Funkcja ma potroic wszystkie elementy parzyste w tablicy przekazanej
//jako argument. Stwórz dwa przypadki testowe dla funkcji.



int main()
{
    //Zadanie 2
    int n=3;
    double x= 2.0;
    printf("%lf\n", foo(n, x));
    return 0;

    //Zadanie 3
    float tab[]= {1.5,2.7,7.2,1.3};
    print("%Iu\n", sizeof(float));
    print("%d\n", fun(&tab[0], &tab[3]));
    return 0;

    //Zadanie 4
}

