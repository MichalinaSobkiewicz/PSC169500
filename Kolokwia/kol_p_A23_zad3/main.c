#include <stdio.h>
#include <stdlib.h>

void reverse_values(int *x, int *y, int *z)
{
    int tempvarx= *x;
    int tempvary= *y;
    int tempvarz= *z;

    *z= tempvarx;
    *x= tempvary;
    *y= tempvarz;
}
int main()
{
    int x= 5;
    int y= 10;
    int z=15;

    printf("Wartosci przed zmianą\n");

    printf("x= %d\n", x);
    printf("y= %d\n", y);
    printf("z= %d\n", z);


    reverse_values(&x, &y, &z);
    printf("Wartosci po zmianie\n");

    printf("x= %d\n", x);
    printf("y= %d\n", y);
    printf("x= %d\n", z);


}
