#include <stdio.h>
#include <string.h>

//Napisz funkcję, która dostaje w argumencie napis. Funkcja ma zwrócić długość napisu, gdy napis nie
//zawiera cyfr w systemie szesnastkowym. Jeśli napis zawiera takową cyfrę, to za każdą cyfrę należy
//odjąć 1 do długości napisu i to zwrócić. Stwórz przypadek testowy.

int dlugoscnapisu(char* nap)
{
    int dlugosc = strlen(nap);
    int count = 0;

    for (int i = 0; i < dlugosc; i++)
    //szesnastkowy od 0-9, od a-f i od A-F
    {
        if ((nap[i] >= '0' && nap[i] <= '9') || (nap[i] >= 'a' && nap[i] <= 'f') || (nap[i] >= 'A' && nap[i] <= 'F'))
        {
            count++;
        }
    }

    if (count > 0)
    {
        return dlugosc - count;
    }

    else
    {
        return dlugosc;
    }
}

int main() {
    char str1[] = "ghijklmno";
    char str2[] = "aAbBCcDdEeFf123456789";

    int length1 = dlugoscnapisu(str1);
    int length2 = dlugoscnapisu(str2);

    printf("Dlugosc napisu pierwszego: %d\n", length1);
    printf("Dlugosc napisu drugiego: %d\n", length2);

    return 0;
}

