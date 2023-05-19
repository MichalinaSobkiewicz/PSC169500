#include <stdio.h>
#include <stdlib.h>

void swap_min_max(int* a, int* b, int* c)
{
    int min_val = *a;
    int max_val = *a;

    if (*b < min_val) {
        min_val = *b;
    }
    if (*b > max_val) {
        max_val = *b;
    }
    if (*c < min_val) {
        min_val = *c;
    }
    if (*c > max_val) {
        max_val = *c;
    }

    if (*a == min_val) {
        *a = max_val;
    } else if (*a == max_val) {
        *a = min_val;
    }
    if (*b == min_val) {
        *b = max_val;
    } else if (*b == max_val) {
        *b = min_val;
    }
    if (*c == min_val) {
        *c = max_val;
    } else if (*c == max_val) {
        *c = min_val;
    }
}

int main() {

    int x = 5;
    int y = 10;
    int z = 3;

    printf("Wartości przed zamianą:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    swap_min_max(&x, &y, &z);

    printf("Wartości po zamianie:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    return 0;
}
