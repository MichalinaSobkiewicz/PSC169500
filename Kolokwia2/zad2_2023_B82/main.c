#include <stdio.h>
#include <stdlib.h>

int foo(char* napis) {
    int suma = 0;

    for (int i = 0; napis[i] != '\0'; i++) {
        if ((napis[i] >= '0' && napis[i] <= '9') ||
            (napis[i] >= 'A' && napis[i] <= 'F'))
        {
            suma++;
        }
    }

    return suma;
}

int main() {
    char napis[] = "HIJKLA123MNO154";
    int sumahex = foo(napis);
    printf("%d\n", sumahex);
    return 0;
}
