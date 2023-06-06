#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ GŁOWY
struct elem
{
    int t;
    struct elem* next;
};

int porownaj(struct elem* Lista1, struct elem* Lista2)
{
    struct elem* wsk1 = Lista1;
    struct elem* wsk2 = Lista2;
    int suma1 = 0;
    int suma2 = 0;

    while (wsk1 != NULL)
    {
        suma1++;
        wsk1 = wsk1->next;
    }
    while (wsk2 != NULL)
    {
        suma2++;
        wsk2 = wsk2->next;
    }

    if (suma1 == suma2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void wyswietl(struct elem* Lista)
{
    struct elem* wsk = Lista;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    while (wsk != NULL)
    {
        printf("%d\n", wsk->t);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct elem* Lista1 = malloc(sizeof(struct elem));

    Lista1->t = 11;
    Lista1->next = malloc(sizeof(struct elem));
    Lista1->next->t = -4;
    Lista1->next->next = malloc(sizeof(struct elem));
    Lista1->next->next->t = 9;
    Lista1->next->next->next = malloc(sizeof(struct elem));
    Lista1->next->next->next->t = 13;
    Lista1->next->next->next->next = NULL;

    struct elem* Lista2 = malloc(sizeof(struct elem));

    Lista2->t = 2;
    Lista2->next = malloc(sizeof(struct elem));
    Lista2->next->t = 3;
    Lista2->next->next = malloc(sizeof(struct elem));
    Lista2->next->next->t = 13;
    Lista2->next->next->next = NULL;

    wyswietl(Lista1);
    wyswietl(Lista2);

    int wynik = porownaj(Lista1, Lista2);

    if (wynik == 1)
    {
        printf("Suma elementow obu list jest rowna\n");
    }
    else
    {
        printf("Listy nie sa sobie rowne\n");
    }

    return 0;
}
