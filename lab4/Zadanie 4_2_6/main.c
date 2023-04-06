#include <stdio.h>
#include <stdlib.h>

void przepisywanie(int n, int tab1[], int tab2[])
{
    for (int i = 0; i < n; i++)
    {
        tab1[i] = tab2[i];
    }
}
void wypisz(int tab[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
}
int main()
{
    int taba[] = {3, 1, 6, 2, 8};
    int tabb[] = {2, 6, 2, 4, 9};
    przepisywanie(5, taba, tabb);
    wypisz(taba, 5);

    return 0;
}
