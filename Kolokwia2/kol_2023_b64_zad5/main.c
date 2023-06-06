#include <stdio.h>
#include <stdlib.h>

//LISTA Z GŁOWĄ
struct node
{
    double z;
    struct node * next;
};

void dodajdoujemnych(struct node* lista, int c)
{
    struct node* wsk=lista->next;

    while (wsk != 0)
    {
        if (wsk->z<0)
        {
            wsk->z += c;
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
        printf("%lf\n", wsk->z);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
   struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->next = malloc(sizeof(struct node));

    Lista1->next->z = 2;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->z = -7;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->z = -2;
    Lista1->next->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->next->z = 3;
    Lista1->next->next->next->next->next = NULL;

    wyswietl(Lista1);
    dodajdoujemnych(Lista1, 5);
    wyswietl(Lista1);

    return 0;
}
