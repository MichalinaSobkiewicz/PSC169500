#include <stdio.h>
#include <stdlib.h>

int *init_block_int()
{
    int *wsk= malloc(5*sizeof(int));
    wsk[0]= 1;
    wsk[1]= 2;
    wsk[2]= 3;
    wsk[3]= 4;
    wsk[4]= 5;
    return &wsk[0];
}
int main()
{
    int *wsk= init_block_int();
    printf("%d\n", *wsk);
    printf("%d\n", *(wsk+1));
    printf("%d\n", *(wsk+2));
    printf("%d\n", *(wsk+3));
    printf("%d\n", *(wsk+4));

    free(wsk);
    return 0;
}
