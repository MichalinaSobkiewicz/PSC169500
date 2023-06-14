#include <stdio.h>

void foo(int n, const char* napis1, char* napis2)
{
    int j = 0;

    for (int i = n - 1; napis1[i] != 0; i += n)
    {
        napis2[j] = napis1[i];
        j++;
    }

    napis2[j] = 0;
}

int main()
{
    const char napis1[] = "abcdefghijklm";
    char napis2[100];
    foo(3, napis1, napis2);
    printf("%s\n", napis1);
    printf("%s", napis2);
    return 0;
}
