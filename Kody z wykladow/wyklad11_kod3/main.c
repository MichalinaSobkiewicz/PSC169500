#include <stdio.h>
#include <stdlib.h>


 struct Struktura
 {
   int pole1;
   int pole2;
   char pole3;
 };

int main()
{
    //zmienna wskazująca konkretne elementy
    //mozna przekazywać nie po kolei
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=2, .pole3='a'};
        //{ .pole2=2, .pole1=60, .pole3='a'};
}
