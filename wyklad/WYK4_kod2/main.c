#include <stdio.h>
#include <stdlib.h>

int main ()
{
int liczba =5;
int* wsk =&liczba;
//jednoczesna deklaracja zmiennej wskaźnikowej wraz z przypisaniem adresu
//deklaracja zmiennej wskaźnikowej o nazwie wsk
// =&liczba, przypisujemy adres poprzednio zadeklarowanej zmiennej
//jednoczesna deklaracja zmiennej wskaźnikowej wraz z przypisaniem adresu
printf("Adres zmiennej: %p\n", wsk);
printf("Adres zmiennej przechowujacej wsk.: %p\n",&wsk );
printf("Wyluskiwanie wskaznika: %d\n",*wsk);
//dereferencja wskaźnika, mówi o tym ile bajtów powinniśmy brac pod uwage
return0;
}
