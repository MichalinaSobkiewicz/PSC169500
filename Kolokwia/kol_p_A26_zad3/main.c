#include <stdio.h>
#include <stdlib.h>

void swap_first_max(int* a, int* b, int* c) {
    int max = *a;
    if (*b > max)
    {
        max = *b;
    }
    if (*c > max)
    {
        max = *c;
    }

    if (*a == max)
    {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    else if (*b == max)
    {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int x = 10;
    int y = 5;
    int z = 8;

    printf("Przed zamianą: x = %d, y = %d, z = %d\n", x, y, z);
    swap_first_max(&x, &y, &z);
    printf("Po zamianie: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
