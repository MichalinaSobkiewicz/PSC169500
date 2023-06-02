#include <stdio.h>
#include <stdlib.h>

//wskaznik na chara a tablica charów

int main()
{
    char tekst1[10]="abcde";
    printf("%Iu\n",sizeof(tekst1));
    printf("%p\n",tekst1);
    printf("%p\n",&tekst1);
    //tekst1="eee";
    //podmiana napisów-niemożliwe

    //tekst1++;
    //przechodzenie za pomocą operatora++- niemożliwe

    tekst1[2]='R';
    //mozemy podmieniac konkretne elementy
    printf("%s\n",tekst1);
    return 0;
}
