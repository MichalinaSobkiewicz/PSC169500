#include <stdio.h>

int dlugoscnapisu(char* nap)
{
    int dlugosc = 0;
    int count = 0;

while (nap[dlugosc] != 0)
{
    if ((nap[dlugosc] >= 48 && nap[dlugosc] <= 57) ||  // 0-9
        (nap[dlugosc] >= 97 && nap[dlugosc] <= 102) ||  // a-f
        (nap[dlugosc] >= 65 && nap[dlugosc] <= 70))  // A-F
    {
        count++;
    }

    dlugosc++;
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
    char str2[] = "AaBbCc1234567890";
    //char str3[] = "Bardzo ladny napis 1234";

    int length1 = dlugoscnapisu(str1);
    int length2 = dlugoscnapisu(str2);
    //int length3 = dlugoscnapisu(str3);

    printf("Dlugosc napisu pierwszego: %d\n", length1);
    printf("Dlugosc napisu drugiego: %d\n", length2);
    //printf("Dlugosc napisu trzeciego: %d\n", length3);

    return 0;
}

