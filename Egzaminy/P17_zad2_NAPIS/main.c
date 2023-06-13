#include <stdio.h>

int iloschex(char* nap)
{
    int dlugosc = 0;
    int suma = 0;

    while (nap[dlugosc] != '\0')
    {
        //tu mozesz zamienic na wartosci  z ASCII dla szesnastkowego
        if ((nap[dlugosc] >= '0' && nap[dlugosc] <= '9') ||  // 0-9
            (nap[dlugosc] >= 'a' && nap[dlugosc] <= 'f') ||  // a-f
            (nap[dlugosc] >= 'A' && nap[dlugosc] <= 'F')) // A-F
        {
            suma++;
        }

        dlugosc++;
    }

    return suma;
}

int main() {
    char str1[] = "ghijklmno";
    char str2[] = "AaBbCc1234567890";

    int wynik1 = iloschex(str1);
    int wynik2 = iloschex(str2);

    printf("Dlugosc napisu pierwszego: %d\n", wynik1);
    printf("Dlugosc napisu drugiego: %d\n", wynik2);

    return 0;
}
