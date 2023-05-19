#include <stdio.h>
#include <stdlib.h>

void swap_last_min(int *a, int *b, int *c)
{
    int min = *a;

    if(*b<min)
    {
        min = *b;
    }
    if(*c<*a)
    {
        min = *c;
    }

    if(min==*a)
    {
        int tempc= *c;
        *c=*a;
        *a= tempc;
    }
    else if(min==*b)
    {
        int tempc = *c;
        *c= *b;
        *b= tempc;
    }

}
int main()
{

    int a= 2;
    int b=1;
    int c=10;

    printf("Przed zmiana: a = %d, b = %d, c = %d\n", a, b, c);
    swap_last_min(&a, &b, &c);
    printf("Po zamianie: a = %d, b = %d, c = %d\n", a, b, c);

}
