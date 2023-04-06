#include <stdio.h>
#include <stdlib.h>

void funkcja(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 2;
    int y = 5;

    printf("Przed zamiana argumentow: x = %d, y = %d\n", x, y);
    funkcja(&x, &y);
    printf("Po zamianie argumentow: x = %d, y = %d\n", x, y);

    return 0;
}
