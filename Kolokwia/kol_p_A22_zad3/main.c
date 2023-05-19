#include <stdio.h>
#include <stdlib.h>


void swap_first_last(int* a, int* b, int* c)
{
    int temp = *a;
    *a = *c;
    *c = temp;
}

int main() {
    int x = 10;
    int y = 20;
    int z = 30;

    printf("Wartości przed zamianą:\n");
    printf("x: %d, y: %d, z: %d\n", x, y, z);

    swap_first_last(&x, &y, &z);

    printf("Wartości po zamianie:\n");
    printf("x: %d, y: %d, z: %d\n", x, y, z);

    return 0;
}
