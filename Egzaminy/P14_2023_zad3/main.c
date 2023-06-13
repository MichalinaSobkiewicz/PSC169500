#include <stdio.h>
#include <stdlib.h>

struct Samochod {
    char marka[15];
    int przebieg;
};

struct Samochod* newstruct(char marka[], int przebieg)
{
    int dlugoscmarki = 0;

    while (marka[dlugoscmarki] != '\0') {
        dlugoscmarki++;
    }

    if (dlugoscmarki < 3 || przebieg <= 1000)
    {
        return NULL;
    }

    struct Samochod* samochod = (struct Samochod*)malloc(sizeof(struct Samochod));

    int i = 0;
    while (marka[i] != '\0')
    {
        samochod->marka[i] = marka[i];
        i++;
    }
    samochod->marka[i] = '\0';
    samochod->przebieg = przebieg;

    return samochod;
}

void dodajKilometry(struct Samochod* samochod)
{
    if (samochod != NULL) {
        samochod->przebieg += 1000;
    }
}

int main() {
    char marka1[] = "Mercedes";
    int przebieg1 = 25233;

    struct Samochod* samochod1 = newstruct(marka1, przebieg1);
    if (samochod1 != NULL)
    {
        printf("%s, %d\n", samochod1->marka, samochod1->przebieg);
        dodajKilometry(samochod1);
        printf("%s, %d\n", samochod1->marka, samochod1->przebieg);
        free(samochod1);
    }
    else {
        printf("Nie udalo sie utworzyc samochodu 1.\n");
    }

    char marka2[] = "BM";
    int przebieg2 = 17510;

    struct Samochod* samochod2 = newstruct(marka2, przebieg2);
    if (samochod2 != NULL) {
        printf("%s, %d\n", samochod2->marka, samochod2->przebieg);
        free(samochod2);
    }
    else {
        printf("Nie udalo sie utworzyc samochodu 2.\n");
    }

    return 0;
}

