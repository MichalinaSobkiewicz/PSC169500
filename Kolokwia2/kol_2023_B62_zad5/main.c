#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ GŁOWY
struct node
{
    int s;
    struct node* next;
};

void podzielnieparzyste(struct node* lista, int a)
{
    struct node* wsk = lista;

    while (wsk != NULL)
    {
        if (wsk->s % 2 != 0)
        {
            wsk->s *= a;
        }
        wsk = wsk->next;
    }
}

void wyswietl(struct node* lista)
{
    struct node* wsk = lista;

    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    while (wsk != NULL)
    {
        printf("%d\n", wsk->s);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->s = 2;
    Lista1->next = malloc(sizeof(struct node));
    Lista1->next->s = 4;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->s = -4;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->s = 6;
    Lista1->next->next->next->next = NULL;

    wyswietl(Lista1);
    podzielnieparzyste(Lista1, 3);
    wyswietl(Lista1);

    return 0;
}

