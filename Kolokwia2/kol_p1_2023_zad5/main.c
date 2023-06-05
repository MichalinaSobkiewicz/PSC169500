#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void usun_z_konca(struct element* Lista)
{
    if (Lista->next == NULL)
    {
        printf("Lista jest pusta. Nie ma elementów do usunięcia.\n");
        return;
    }

    struct element* poprzednik = NULL; //1 element- czasowo zerowy
    struct element* nastepnik = Lista; //zmienna tymczasowa

    while (nastepnik->next != NULL)
    {
        poprzednik = nastepnik;
        nastepnik = nastepnik->next;
    }

    free(nastepnik);

    if (poprzednik != NULL)
    {
        poprzednik->next = NULL;
    }
}

void wyswietl(struct element * Lista)
{
    struct element * wsk;
    wsk = Lista->next;
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

    struct element * Lista2 = malloc(sizeof(struct element));
    Lista2->next = malloc(sizeof(struct element));
    Lista2->next->i = 12;
    Lista2->next->next = malloc(sizeof(struct element));
    Lista2->next->next->i = -8;
    Lista2->next->next->next=malloc(sizeof(struct element));
    Lista2->next->next->next->i=14;
    Lista2->next->next->next->next = NULL;
    wyswietl(Lista2);
    usun_z_konca(Lista2);
    wyswietl(Lista2);
    return 0;
}
