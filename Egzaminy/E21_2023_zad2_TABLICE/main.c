#include <stdio.h>
#include <stdlib.h>
//Napisz funkcję porównująca dwie tablice jednowymiarowe o takich samych rozmiarach
//o wartościach typu int. Funkcja ma zwrócić 1 jeśli liczba elementów nieparzystych z każdej
//tablic z osobna są sobie równe, oraz ma zwrócić 0 w przeciwnym wypadku.

int porownaj_nieparzyste(int n, int tab1[n], int tab2[n])
{
    int sum1 = 0;
    int sum2=0;

    for(int i=1; i<n; i++)
    {
        if(tab1[i]%2!=0)
        {
            sum1++;
        }
        if(tab2[i]%2!=0)
        {
            sum2++;
        }
    }

    if(sum1==sum2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int tab1[] ={4,5,9,6};
    int tab2[] ={2,13,1,4};
    int n=4;
    printf("%d\n", porownaj_nieparzyste(n,tab1, tab2));
    return 0;
}

