#include <stdio.h>
#include <stdlib.h>

//printowanie adresów
 struct Struktura
 {
   int pole1;
   int pole2;
   char pole3;
 };


 //nie kompiluje sie na czysto
int main()
{
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=0.2, .pole3='a'};

    printf("%d\n",zmiennaS);
    //standardowy znacznik nie umożliwi wyświetlenia struktury

    printf("%p\n",&zmiennaS);
    //ogólny adres całej zmiennej

    //adresy konkretnych pól są powiększone o wielkość typu
    printf("%p\n",&zmiennaS.pole1);
    printf("%p\n",&zmiennaS.pole2);
    printf("%p\n",&zmiennaS.pole3);

    //sprawdzamy ile miejsca zajmuje zmienna
    printf("%Iu\n", sizeof(zmiennaS));

    //sprawdzamy ile miejsca zajmuje struktura
    printf("%Iu\n", sizeof(struct Struktura));

    //w obu przypadkach nie zwróci to dokładnej ilości bajtów
    //powinno zwrócić 4 + 4 + 1
    //dodawany jest tzw structure podding- dodatkowe miejsce
}
