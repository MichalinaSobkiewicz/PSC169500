#include <stdio.h>
#include <stdlib.h>

int cyfra(char* napis)
{
    int temp=0;

    for (int i = 0; napis[i] != 0; i++)
    {
        if (napis[i] >= '0' && napis[i] <= '9')
        //tutaj dajemy informacje o tym, że ma być to cyfra
        //bo cyfry w tablicy ASCII są zlokalizowane między 0 a 9

        {
            temp++;
        }

    }

    return temp;
}

int main() {
    char napis[] = "ania ma 3 koty, jacek ma 4 psy, karolina ma 2 konie";

    int wynik = cyfra(napis);

    printf("Ilość cyfr w tym napisie wynosi: %d\n", wynik);
    return 0;
}
