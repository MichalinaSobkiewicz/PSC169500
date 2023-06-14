#include <stdio.h>

void foo(char* napis1, char* napis2) {
    int j = 0;

    for (int i = 0; napis1[i] != 0; i++) {
        if (napis1[i] >= '\x41' && napis1[i] <= '\x5A') {
            napis2[j] = napis1[i];
            j++;
        }
    }
    napis2[j] = '\0';  // Dodajemy znak końca napisu na końcu napisu2
}

int main()
{
    char napis1[] = "AbCdEf";
    char napis2[100];
    foo(napis1, napis2);
    printf("%s\n", napis1);
    printf("%s", napis2);
    return 0;
}

