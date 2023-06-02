#include <stdio.h>
#include <stdlib.h>

//zwracanie napisow poprzez funkcje
//traktujemy napis jako wskaźnik na chara

char* foo()
{
    return "abc";
}

int main()
{
    printf("%s\n",foo());
    return 0;
}
