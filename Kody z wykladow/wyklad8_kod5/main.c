#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slowo[5];
    gets(slowo); //niepoformatowane wejscie
    //usunieta ze standardu jezyka c
    printf("%s\n",slowo);
    puts(slowo); //tez niepoformatowane wyjscie
    //puts nie da nam  adresu

    //scanf - do znaku niedrukowanego, reszta do końca linii
    //gets - mało bezpieczna przy przepełnieniu
    //fgets - dodaje koniec linii na końcu napisu

    return 0;
}
