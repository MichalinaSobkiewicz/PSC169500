#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3];
    int (*wsk_w)[3]; //wskaznik na wiersz (czyli 3 elementową tablice int)
    int*wsk_k; // wskaznik na kolumne (czyli na liczbę int)

    for(wsk_w = tab;wsk_w < tab + 2;wsk_w++)
    {
        for(wsk_k = *wsk_w;wsk_k < *wsk_w + 3;wsk_k++)
        {
            printf("TAB[%Id, %Id]= ",wsk_w-tab, wsk_k-*wsk_w);
            scanf("%d",wsk_k);
            printf("%p \n",wsk_k);
        }
    }
    return 0;
}
