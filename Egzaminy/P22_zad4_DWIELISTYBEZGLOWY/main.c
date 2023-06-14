#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node* next;
};

int porownaj(struct node* Lista1, struct node* Lista2)
{
    struct node* wsk1 = Lista1;
    struct node* wsk2 = Lista2;
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

void wyswietl(struct node* Lista)
{
    struct node* wsk = Lista;
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
    struct node* Lista1 = malloc(sizeof(struct node));

    Lista1->a = 11;
    Lista1->next = malloc(sizeof(struct node));
    Lista1->next->a = -4;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->a = 9;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->a = 13;
    Lista1->next->next->next->next = NULL;

    struct node* Lista2 = malloc(sizeof(struct node));

    Lista2->a = 2;
    Lista2->next = malloc(sizeof(struct node));
    Lista2->next->a = 3;
    Lista2->next->next = malloc(sizeof(struct node));
    Lista2->next->next->a = 13;
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

