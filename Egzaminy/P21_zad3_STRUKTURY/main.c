#include <stdio.h>
#include <stdlib.h>

struct Komputer
{
    char model[20];
    int czasUzytkowania;
};

struct Komputer* initKomputer(char model[], int czasUzytkowania)
{
    int dlugosc = 0;
    int i = 0;

    while (model[i] != '\0')
    {
        dlugosc++;
        i++;
    }

    if (dlugosc < 4 || czasUzytkowania <= 100)
    {
        return NULL;
    }

    struct Komputer* komputer = (struct Komputer*)malloc(sizeof(struct Komputer));

    i = 0;
    while (model[i] != '\0' && i < 19)
    {
        komputer->model[i] = model[i];
        i++;
    }
    komputer->model[i] = '\0';
    komputer->czasUzytkowania = czasUzytkowania;

    return komputer;
}

void zwiekszCzasUzytkowania(struct Komputer* komputer)
{
    if (komputer != NULL)
    {
        komputer->czasUzytkowania += 100;
    }
}

int main()
{
    char model1[20] = "Lenovo Legion";
    int czasUzytkowania1 = 4000;

    struct Komputer* komputer1 = initKomputer(model1, czasUzytkowania1);
    if (komputer1 != NULL)
    {
        printf("%s, %d\n", komputer1->model, komputer1->czasUzytkowania);
        zwiekszCzasUzytkowania(komputer1);
        printf("Po zwiekszeniu: %d\n", komputer1->czasUzytkowania);
        free(komputer1);
    }

    return 0;
}

