#include <stdio.h>
#include <stdlib.h>

funkcja(int* a, int* b)
{
    if(*a > *b)
        return *b;
    return *a;
}

// lub
// funkcja(int* wsk1, int* wsk2)
// {
    // if(*wsk1 > *wsk2)
        // return *wsk2;
    // return *wsk1;
// }


int main()
{
    int a=4, b = 9;
    printf("%d\n", funkcja(&a, &b));
    return 0;
}
