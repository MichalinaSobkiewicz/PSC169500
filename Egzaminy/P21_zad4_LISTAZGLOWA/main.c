#include <stdio.h>
#include <stdlib.h>

struct node
{
    int i;
    struct node* next;
};

int porownaj(struct node* Lista1, struct node* Lista2)
{
    struct node* wsk1 = Lista1->next;
    struct node* wsk2 = Lista2->next;

    // Przejdź do ostatniego elementu w Lista1
    while (wsk1->next != NULL)
    {
        wsk1 = wsk1->next;
    }

    // Przejdź do ostatniego elementu w Lista2
    while (wsk2->next != NULL)
    {
        wsk2 = wsk2->next;
    }

    // Porównaj wartości ostatnich elementów
    if (wsk1->i == wsk2->i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void wyswietl(struct node* Lista)
{
    struct node* wsk = Lista->next;
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
    struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->next = malloc(sizeof(struct node));
    Lista1->next->i = 11;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->i = -4;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->i = 13;
    Lista1->next->next->next->next = NULL;

    struct node* Lista2 = malloc(sizeof(struct node));
    Lista2->next = malloc(sizeof(struct node));
    Lista2->next->i = 2;
    Lista2->next->next = malloc(sizeof(struct node));
    Lista2->next->next->i = 3;
    Lista2->next->next->next = malloc(sizeof(struct node));
    Lista2->next->next->next->i = 13;
    Lista2->next->next->next->next = NULL;

    wyswietl(Lista1);
    wyswietl(Lista2);

    int wynik = porownaj(Lista1, Lista2);

    if (wynik == 1)
    {
        printf("ostatnie elementy obu list sa sobie rowne\n");
    }
    else
    {
        printf("ostatnie elementy obu list nie sa sobie rowne\n");
    }

    return 0;
}
