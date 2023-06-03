#include <stdio.h>
#include <stdlib.h>

struct Smartfon
{
    char marka[100];
    int cena;
};

int najmniejszacenafoo(int n, struct Smartfon a[n])
{
    int najmniejszacena = a[0].cena;
    for (int i = 1; i < n; i++)
    {
        if (a[i].cena < najmniejszacena)
        {
            najmniejszacena = a[i].cena;
        }
    }

    return najmniejszacena;
}

int main()
{
    struct Smartfon smartfon1 = {"Samsung", 3000};
    struct Smartfon smartfon2 = {"Xiaomi", 1500};
    struct Smartfon smartfon3 = {"Huwaei", 1000};
    struct Smartfon smartfon4 = {"Iphone", 4000};

    struct Smartfon tablica_smartfonow[4] = {smartfon1, smartfon2, smartfon3, smartfon4};
    int rozmiartablicy = 4;

    int wynik = najmniejszacenafoo(rozmiartablicy, tablica_smartfonow);
    printf("Najmniejsza cena za smartfon wynosi: %d\n", wynik);

    return 0;
}
