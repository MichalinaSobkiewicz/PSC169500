#include <stdio.h>
#include <stdlib.h>


void idzPrawoDol(int x,int y)
{
    printf("Adres x w funkcji void %p\n", &x);
    printf("Adres y w funkcji void %p\n", &y);
    x=x+1;
    y=y-1;
}


int main()
{
    int x=20, y=15;
    //te dwie zmienne (x,y) z funkcji void i main to dwie rozne zmienne
    //;zajmuja rózne miejsca w pamieci
    printf("Adres x w funkcji main %p\n", &x);
    printf("Adres y w funkcji main %p\n", &y);
    idzPrawoDol(x,y);
    printf("Aktualna pozycja: [ %d, %d ] \n",x,y);
    return 0;
}
