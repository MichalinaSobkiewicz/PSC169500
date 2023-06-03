#include <stdio.h>
#include <stdlib.h>

//Tablica wielowymiarowe (elementów)
//czasem nazywane statycznymi
//definiowane poprzez nawiasy kwadratowe
//są to tablice o stałym rozmiarze (chyba ze wartosci sa pobierane z wejscia)
//dwuwymiarowa tablica elementów-do kazdego z wymiarów uzywamy nawiasu kwadratowego
//by użyc- musi byc zadeklarowana

//Tablica tablic (arrays of arrays)
//tablice dynamiczne o zmiennym rozmiarze
//każdy wymiar jest tworzony poprzez malloca (dwa wymiary- dwa malloki, trzy wymiary- trzy malloki,...)
//czesc wymarow moze byc zrobiona przy pomocy malloca, a część poprzez nawiasy kwadratowe (na stos)



int main()
{
    //deklaracja tablicy wielowymiarowej statycznej:
    //int tab[2][3];

    //bedziemy uzywac tablic wielowymiarowych o stałym typie dla każdego z wymarów
    //dla tablicy dwuwymiarowej:
    //pierwszy nawias- nazywamy wierszami
    //drugi nawias- kolumnami
    //często utożsamiane z pojęciem macierzy

    //INICJALIZACJA tablicy wielowymiarowej
    int tab[2][3] = {{1,2,4},{-2,3,5}};

    // lub:
    //int tab[2][3];
    //tab[0][0]=1;
    //tab[0][1]=2;
    //tab[0][2]=4;
    //tab[1][0]=-2;
    //tab[1][1]=3;
    //tab[1][2]=5;

    //wyświetlanie tablicy przy pomocy funkcji
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("[%d, %d]=%d\n", i,j,tab[i][j]);
        }
    }

    //gdy przekażemy za mało lub za dużo elementów
    int tab1[2][4] = {{1,2,4}};


       for(int i=0; i<2; i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("\n[%d, %d]=%d\n", i,j,tab1[i][j]);
        }
    }
    //reszta elementów jest uzupełniana zerami (gwarantowane)

    //elementy, które stnowią ten sam wiersz powinny byc koło siebie
    int tab2[2][3] = {{1,2,4},{-2,3,5}};
    printf("%p\n",&tab[0][0]);
    printf("%p\n",&tab[0][1]);
    printf("%p\n",&tab[0][2]);
    printf("%p\n",&tab[0][3]);
    //ten sam adres co element wyżej, jeżeli wychodzi poza skale
    printf("%p\n",&tab[1][0]);
    printf("%p\n",&tab[1][1]);
    printf("%p\n",&tab[1][2]);


    //notacja wskaźnikowa:
    //tab[i][j]
    //*(*(tab+i)+j) - to samo co linijka wyżej
    return 0;
}
