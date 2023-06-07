#include <stdio.h>
#include <stdlib.h>
//lista z głową
struct node
{
    int x;
    struct node * next;
};

void usun_ostatni(struct node *lista)
{
    if (lista->next == NULL)
    {
        return;  // Lista jest pusta
    }

    struct node *wsk = lista->next;
    struct node *poprzedni = lista;

    while (wsk->next != NULL)
    {
        poprzedni = wsk;
        wsk = wsk->next;
    }

    poprzedni->next = NULL;
    free(wsk);
}

void wyswietlListeZGlowa(struct node * lista)
{
    if (lista->next->x == 3)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct node * wsk = lista;
    while (wsk != NULL)
    {
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}


    int main()
{
    struct node *lista = malloc(sizeof(struct node));
    lista->x = 3;
    lista->next=malloc(sizeof(struct node));
    lista->next->x=5;
    lista->next->next=malloc(sizeof(struct node));
    lista->next->next->x = 1;
    lista->next->next->next = NULL;

    wyswietlListeZGlowa(lista);
    usun_ostatni(lista);
    wyswietlListeZGlowa(lista);

    return 0;
}
