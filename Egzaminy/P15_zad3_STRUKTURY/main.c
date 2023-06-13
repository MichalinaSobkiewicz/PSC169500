#include <stdio.h>
#include <stdlib.h>

struct Komputer {
    char model[50];
    int moc;
};

struct Komputer* newstruct(char model[], int moc)
{
    int dlugoscmodelu = 0;

    while (model[dlugoscmodelu] != '\0') {
        dlugoscmodelu++;
    }

    if (dlugoscmodelu < 4 || moc <= 100) {
        return NULL;
    }

    struct Komputer* komputer = (struct Komputer*)malloc(sizeof(struct Komputer));

    int i = 0;
    while (model[i] != '\0') {
        komputer->model[i] = model[i];
        i++;
    }
    komputer->model[i] = '\0';
    komputer->moc = moc;

    return komputer;
}

void zwiekszMoc(struct Komputer * komputer)
{
     if (komputer != NULL)
    {
        komputer->moc += 50;
    }
}
int main()
{
    char model1[] = "Lenovo Legion";
    int moc1 = 4000;
    struct Komputer* komputer1 = newstruct(model1, moc1);
    if (komputer1 != NULL) {
        printf("%s, %d\n", komputer1->model, komputer1->moc);
        zwiekszMoc(komputer1);

        //uzycie funkcji do zwiekszania mocy
        printf("%d\n", komputer1->moc);
        free(komputer1);
    }
    else {
        printf("Nie udalo sie utworzyc komputera 1.\n");
    }

    char model2[]= "Lenovo Yoga";
    int moc2= 2883;

    struct Komputer* komputer2= newstruct(model2, moc2);
    if(komputer2 != NULL)
    {
        printf("%s, %d\n", komputer2->model, komputer2->moc);
        free(komputer1);
    }
    else
    {
        printf("Nie udalo sie utworzyc komputera 1.\n");
    }

    return 0;
}

