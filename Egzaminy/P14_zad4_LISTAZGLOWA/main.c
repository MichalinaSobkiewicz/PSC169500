#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node*next;
};


int zsumuj_nieparzyste(struct node* lista)
{
    struct node* wsk = lista->next;
    int suma=0;
    if (wsk != NULL)
    {
        while (wsk != NULL)
        {
            if (wsk->x % 2 != 0)
            {
                suma += wsk->x;
            }

            wsk = wsk->next;
        }
    }
    return suma;
}

void wyswietl(struct node* lista)
{
    if (lista == NULL || lista->next == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    struct node* wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->next = malloc(sizeof(struct node));

    Lista1->next->x = 2;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->x = 5;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->x = 2;
    Lista1->next->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->next->x = 3;
    Lista1->next->next->next->next->next = NULL;

    wyswietl(Lista1);
    int wynik= zsumuj_nieparzyste(Lista1);
    printf("%d", wynik);

    return 0;
}
