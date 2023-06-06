#include <stdio.h>
#include <stdlib.h>
//LISTA BEZ GŁOWY
struct elem
{
    int a;
    struct elem* next;
};

void dokwadratu(struct elem* lista)
{
    struct elem* wsk = lista;

    while (wsk != NULL)
    {
        wsk->a = wsk->a * wsk->a;
        wsk = wsk->next;
    }
}

void wyswietl(struct elem* lista)
{
    struct elem* wsk = lista;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    while (wsk != NULL)
    {
        printf("%d\n", wsk->a);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct elem* lista = malloc(sizeof(struct elem));
    lista->a = 2;
    lista->next = malloc(sizeof(struct elem));
    lista->next->a = 3;
    lista->next->next = malloc(sizeof(struct elem));
    lista->next->next->a = 4;
    lista->next->next->next = NULL;

    wyswietl(lista);
    dokwadratu(lista);
    wyswietl(lista);

    return 0;
}

