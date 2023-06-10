#include <stdio.h>
#include <stdlib.h>

struct node
{
    int t;
    struct node* next;
};

int porownaj(struct node* Lista1, struct node* Lista2)
{
    struct node* wsk1 = Lista1->next;
    struct node* wsk2 = Lista2->next;
    //inicjalizacja najwiekszego elementu z 1 listy
    int max = wsk1->t;

    //inicjalizacja zmiennej przechowujacej sume wiekszych niz max z 1 listy
    int sumawiekszychnizmax = 0;

    // Znajdź maksimum w pierwszej liście
    while (wsk1 != NULL)
    {
        if (wsk1->t > max)
        {
            max = wsk1->t;
        }
        wsk1 = wsk1->next;
    }

    // Sumuj elementy większe od maksimum z drugiej listy
    while (wsk2 != NULL)
    {
        if (wsk2->t > max)
        {
            sumawiekszychnizmax += wsk2->t;
        }
        wsk2 = wsk2->next;
    }

    return sumawiekszychnizmax;
}

int main()
{
    struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->next = malloc(sizeof(struct node));
    Lista1->next->t = 6;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->t = -4;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->t = 6;
    Lista1->next->next->next->next = NULL;

    struct node* Lista2 = malloc(sizeof(struct node));
    Lista2->next = malloc(sizeof(struct node));
    Lista2->next->t = 2;
    Lista2->next->next = malloc(sizeof(struct node));
    Lista2->next->next->t = 7;
    Lista2->next->next->next = malloc(sizeof(struct node));
    Lista2->next->next->next->t = 13;
    Lista2->next->next->next->next = NULL;

    int wynik = porownaj(Lista1, Lista2);

    printf("%d\n", wynik);

    // Zwolnienie pamięci
    struct node* temp;
    while (Lista1 != NULL)
    {
        temp = Lista1;
        Lista1 = Lista1->next;
        free(temp);
    }

    while (Lista2 != NULL)
    {
        temp = Lista2;
        Lista2 = Lista2->next;
        free(temp);
    }

    return 0;
}

