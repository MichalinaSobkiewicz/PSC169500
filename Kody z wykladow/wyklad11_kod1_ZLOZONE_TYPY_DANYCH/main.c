#include <stdio.h>
#include <stdlib.h>

//Struktury- specjalny typ danych mogący przechowywać wiele wartości w jednej zmiennej.
//Od tablic jednakże różni się tym, iż te wartości mogą być różnych typów.

//zajmiemy się strukturą unii i typu wyliczeniowego

//deklaracja struktury:
struct Struktura
{
    //składowe struktury:
  int pole1;
  int pole2;
  char pole3;
}; //po deklaracji struktury powinniśmy mieć średnik
//składowe są niezależne jeżeli chodzi o miejsce w pamieci

//strukture możemy rozumieć jako typ

int main()
{
    //strukture możemy rozumieć jako typ taki sam jak int, char, itd...
    //dlatego deklaracja wyglada podobnie:
    struct Struktura zmienna;

    //dostęp do składowych (atrybutów) realizowany jest przy pomocy kropki
    zmienna.pole1=3;
    //sprawdz w debugerze, zwroc uwage na inne pola

    return 0;
}
