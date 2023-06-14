#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};

int porownaj(struct element* Lista1, struct element* Lista2)
{
    struct element* wsk1 = Lista1->next;
    struct element* wsk2 = Lista2->next;
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

void wyswietl(struct element* Lista)
{
    struct element* wsk = Lista->next;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    while (wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element* Lista1 = malloc(sizeof(struct element));
    Lista1->next = malloc(sizeof(struct element));
    Lista1->next->i = 11;
    Lista1->next->next = malloc(sizeof(struct element));
    Lista1->next->next->i = -4;
    Lista1->next->next->next = malloc(sizeof(struct element));
    Lista1->next->next->next->i = 9;
    Lista1->next->next->next->next = NULL;

    struct element* Lista2 = malloc(sizeof(struct element));
    Lista2->next = malloc(sizeof(struct element));
    Lista2->next->i = 2;
    Lista2->next->next = malloc(sizeof(struct element));
    Lista2->next->next->i = 3;
    Lista2->next->next->next = malloc(sizeof(struct element));
    Lista2->next->next->next->i = 13;
    Lista2->next->next->next->next = NULL;

    wyswietl(Lista1);
    wyswietl(Lista2);

    porownaj(Lista1, Lista2);
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
