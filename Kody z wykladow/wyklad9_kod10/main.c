#include <stdio.h>
#include <stdlib.h>

//wskaznik na chara a tablica charów


int main()
{
    char *tekst2="abcde";

    printf("%Iu\n",sizeof(tekst2));
    //mimo tego, że ciąg ma 5 znaków, to wyswietla 8
    //bo wszystkie typy wskaznikowe są 8-bajtowe
    //(my tak naprawde wyswietlamy rozmiar wskaźnika a nie zmiennej)

    printf("%p\n",tekst2);


    printf("%p\n",&tekst2);

    tekst2="WERT";
    //mozna podmieniac tekst

    printf("%s\n",tekst2);
    tekst2++;
    //mozna przechodzić przy pomocy operatora ++

    //tekst2[2]='R';
    //nie mozna podmieniac konkretnych znaków

    printf("%s\n",tekst2);
    return 0;
}
