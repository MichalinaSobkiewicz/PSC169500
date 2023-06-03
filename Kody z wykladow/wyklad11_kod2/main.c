#include <stdio.h>
#include <stdlib.h>

//1
 struct Struktura
 {
   int pole1;
   int pole2;
   char pole3;
 };

//2
 //inicjalizacja jak i deklaracja poza mainem (rzadko używana)
 struct moja_struct
 {
    int a;
    char b;

} moja = {1,'c'};

//3
struct Struktura
{
   int pole;

} abc;



int main()
{
    //1
    struct Struktura zmiennaS = {60, 2, 'a'};


    //3
    abc.pole=4;
    printf("%d",abc.pole);
    return 0;
}
