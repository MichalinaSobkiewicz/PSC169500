#include <stdio.h>
#include <stdlib.h>

void fun(int* w1, int* w2)
{
    //wymyslilam ze bede je zamieniac kolejnoscia
    int* a = w1;
    int temp = *a;
    *w1 = *w2;
    *w2 = temp;
}

int main()
{
    int w1 = 6;
    int w2 = 4;

    printf("wartosci przed zmiana:\n");
    printf("%d, %d\n", w1, w2);

    fun(&w1, &w2);

    printf("wartosci po zmianie:\n");
    printf("%d, %d\n", w1, w2);

    return 0;
}

