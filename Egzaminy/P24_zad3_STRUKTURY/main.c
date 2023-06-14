#include <stdio.h>

struct Komputer
{
    char model[20];
    int czasUzytkowania;
};

struct Komputer initKomputer(const char model[], int czasUzytkowania)
{
    struct Komputer komputer;

    int i = 0;
    while (model[i] != '\0' && i < 19)
    {
        komputer.model[i] = model[i];
        i++;
    }
    komputer.model[i] = '\0';

    int dlugosc = 0;
    while (model[dlugosc] != '\0')
    {
        dlugosc++;
    }

    if (dlugosc >= 4 && czasUzytkowania > 100)
    {
        komputer.czasUzytkowania = czasUzytkowania;
    }
    else
    {
        komputer.model[0] = 'D';
        komputer.model[1] = 'E';
        komputer.model[2] = 'F';
        komputer.model[3] = 'A';
        komputer.model[4] = 'U';
        komputer.model[5] = 'L';
        komputer.model[6] = 'T';

        komputer.czasUzytkowania = 200;
    }

    return komputer;
}

void zwiekszCzasUzytkowania(struct Komputer *komputer)
{
    if (komputer != NULL)
    {
        komputer->czasUzytkowania += 100;
    }
}

int main()
{
    struct Komputer komputer1 = initKomputer("Lenovo Legion", 4000);
    printf("Model: %s, Czas użytkowania: %d\n", komputer1.model, komputer1.czasUzytkowania);

    struct Komputer komputer2 = initKomputer("HP", 50);
    printf("Model: %s, Czas użytkowania: %d\n", komputer2.model, komputer2.czasUzytkowania);

    zwiekszCzasUzytkowania(&komputer1);
    printf("Po zwiększeniu czasu użytkowania: %d\n", komputer1.czasUzytkowania);

    return 0;
}


