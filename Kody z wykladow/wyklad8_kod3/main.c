#include <stdio.h>
#include <stdlib.h>


//wczytywanie do scanf

int main()
{
    char znak;
    scanf(" %c",&znak);
    //białe spacje są pomijalne
    printf("%c\n",znak);
    return 0;
}
