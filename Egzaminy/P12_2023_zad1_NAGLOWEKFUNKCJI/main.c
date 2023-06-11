#include <stdio.h>

//wymyslilam sobie ze program bedzie sumowal elementy
//ktorych indeksy wierszy i kolumn sa podzielne przez a

float fun(int a, float tab[][10])
{
    float sum = 0.0;
    for (int i = 0; i < 10; i++)
        {
        for (int j = 0; j < 10; j++)
        {
            if (i % a == 0 && j % a == 0)
            {
                sum += tab[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int a = 2;
    float tab[10][10];

    // Inicjalizacja tablicy
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tab[i][j] = i * j;
        }
    }

    // Wyświetlanie tablicy
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%lf\ ", tab[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    float result = fun(a, tab);
    printf("Suma wybranych elementów tablicy: %lf\n", result);

    return 0;
}
