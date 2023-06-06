#include <stdio.h>
#include <stdlib.h>

struct elem
{
    int x;
    struct elem* next;
};

void powieksz(struct elem* Lista1)
{
    struct elem* wsk = Lista1;

    while (wsk != NULL)
    {
        wsk->x += 5;
        wsk = wsk->next;
    }
}

void wyswietl(struct elem* Lista)
{
    struct elem* wsk = Lista->next;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    while (wsk != NULL)
    {
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct elem* Lista1 = malloc(sizeof(struct elem));
    Lista1->next = malloc(sizeof(struct elem));

    Lista1->next->x = 3;
    Lista1->next->next = malloc(sizeof(struct elem));
    Lista1->next->next->x = 11;
    Lista1->next->next->next = malloc(sizeof(struct elem));
    Lista1->next->next->next->x = -4;
    Lista1->next->next->next->next = malloc(sizeof(struct elem));
    Lista1->next->next->next->next->x = 9;
    Lista1->next->next->next->next->next = NULL;

    wyswietl(Lista1);
    powieksz(Lista1);
    wyswietl(Lista1);

    return 0;
}
