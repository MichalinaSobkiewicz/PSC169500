#include <stdio.h>
#include <stdlib.h>

struct Telefon
{
    char marka[15];
    int liczbaPolaczen;
};

struct Telefon* initTelefon(char marka[], int liczbaPolaczen)
{
    int dlugosc = 0;
    int i = 0;

    while (marka[i] != 0)
    {
        dlugosc++;
        i++;
    }

    if (dlugosc < 4 || liczbaPolaczen <= 100)
    {
        return NULL;
    }

    struct Telefon * telefon = (struct Telefon*)malloc(sizeof(struct Telefon));

    i = 0;
    while (marka[i] != 0)
    {
        telefon->marka[i] = marka[i];
        i++;
    }
    telefon->marka[i] = 0;
    telefon->liczbaPolaczen = liczbaPolaczen;

    return telefon;
}

void zwiekszliczbaPolaczen(struct Telefon* telefon)
{
    if (telefon != NULL)
    {
        telefon->liczbaPolaczen += 10;
    }
}

int main()
{
    char marka1[15] = "Iphone";
    int liczbaPolaczen1 = 3551;

    struct Telefon* telefon1 = initTelefon(marka1, liczbaPolaczen1);
    if (telefon1 != NULL)
    {
        printf("%s, %d\n", telefon1->marka, telefon1->liczbaPolaczen);
        zwiekszliczbaPolaczen(telefon1);
        printf("Po zwiekszeniu: %d\n", telefon1->liczbaPolaczen);
        free(telefon1);
    }

    return 0;
}
