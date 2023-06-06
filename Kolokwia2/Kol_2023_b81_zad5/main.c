#include <stdio.h>
#include <stdlib.h>
//DWIE LISTY Z GŁOWĄ


struct node
{
    int t;
    struct node* next;
};

int porownaj(struct node* Lista1, struct node* Lista2)
{
    struct node* wsk1 = Lista1->next;
    struct node* wsk2 = Lista2->next;
    int suma1=0;
    int suma2=0;
     while (wsk1 != NULL)
    {
        if(wsk1->t %2 == 0)
        {
            suma1++;
        }
        wsk1 = wsk1->next;
    }
    while (wsk2 != NULL)
    {
        if(wsk2->t %2 == 0)
        {
            suma2++;
        }
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
    struct node* wsk = Lista->next;
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
    struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->next = malloc(sizeof(struct node));
    Lista1->next->t = 11;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->t = -4;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->t = 6;
    Lista1->next->next->next->next = NULL;

    struct node* Lista2 = malloc(sizeof(struct node));
    Lista2->next = malloc(sizeof(struct node));
    Lista2->next->t = 2;
    Lista2->next->next = malloc(sizeof(struct node));
    Lista2->next->next->t = 3;
    Lista2->next->next->next = malloc(sizeof(struct node));
    Lista2->next->next->next->t = 13;
    Lista2->next->next->next->next = NULL;

    wyswietl(Lista1);
    wyswietl(Lista2);

    porownaj(Lista1, Lista2);
    int wynik = porownaj(Lista1, Lista2);

    if (wynik == 1)
    {
        printf("Suma elementow parzystych obu list jest rowna\n");
    }
    else
    {
        printf("Sumy elementow parzystych obu liczb sa rozne\n");
    }


    return 0;
}
