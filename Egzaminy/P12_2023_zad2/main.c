#include <stdio.h>

int* find_if(int n, int tab[n], int (*predicate)(int))
{
    for (int i = 0; i < n; i++)
        {
        if (predicate(tab[i]) != 0)
        {
            return &tab[i];
        }
    }
    return NULL;
}

int is_negative(int el)
{
    return el != 0;
}

int main() {
    int tab[] = {0, 2, -3, 4, -5};
    int n = sizeof(tab) / sizeof(tab[0]);

    int* result = find_if(n, tab, is_negative);
    if (result != NULL)
    {
     printf("Pierwszy element spelniajacy ten waruunek: %d\n", *result);
    }
    else
    {
        return NULL;
    }

    return 0;
}

