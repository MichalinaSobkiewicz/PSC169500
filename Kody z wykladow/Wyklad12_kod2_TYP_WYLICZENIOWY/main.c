#include <stdio.h>
#include <stdlib.h>

//Typ wyliczeniowy- służy do tworzenia zmiennych, które mogą przyjmować tylko pewne z góry ustalone wartości:


enum miasta {OLSZTYN=-4, GDANSK, KRAKOW, WARSZAWA, BYDGOSZCZ};
//nie definujemy we wnętrzu innej funkcji
//uzywamy kiedy potrzebujemy skończonej liczby wartosci

int main()
{
    enum miasta m1 = WARSZAWA;
    //Warszawa staje sie -1;
    //printf("%s\n",m1);

    //poprawne znaczniki formatowania:
    printf("%d\n",m1);
    printf("%u\n",m1);

    printf("%Iu\n", sizeof(enum miasta));
    return 0;
}
