#include <stdio.h>

void foo(int a, char *b, int tab[][a])
{
    printf("Wartosc a: %d\n", a);
    printf("Napis: %s\n", b);
    printf("Tablica:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a = 6;
    int tab[][6] = {{1, 2, 3, 0, 0, 0}, {4, 5, 6, 0, 0, 0}};
    char b[] = "przykladowy napis";

    foo(a, b, tab);

    return 0;
}
