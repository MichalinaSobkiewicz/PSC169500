#include <stdio.h>
#include <stdlib.h>

void foo(int n, int* tab)
{
    for(int i = 0; i < n; i++)
    {
        if(*(tab + i) % 2 == 0)
        {
            *(tab + i) = *(tab + i) / 2;
        }
    }
}

int main() {
    int n = 5;
    int tab[] = {-1, -2, 3, -4, 5};
    foo(n, tab);

    for (int i = 0; i < n; i++) {
        printf("%d ", *(tab + i));
    }

    return 0;
}
