#include <stdio.h>
#include <stdlib.h>

//LISTA Z GŁOWĄ
struct element
{
    int value;
    struct element* next;
};

void pomnoz_nieparzyste(struct element* lista, int a)
{
    struct element* wsk = lista->next;

    if (wsk != NULL)
    {
        while (wsk != NULL)
        {
            if (wsk->value % 2 != 0)
            {
                wsk->value *= a;
            }

            wsk = wsk->next;
        }
    }
}

void wyswietl(struct element* lista)
{
    if (lista == NULL || lista->next == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }

    struct element* wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%d\n", wsk->value);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element* Lista1 = malloc(sizeof(struct element));
    Lista1->next = malloc(sizeof(struct element));

    Lista1->next->value = 2;
    Lista1->next->next = malloc(sizeof(struct element));
    Lista1->next->next->value = 4;
    Lista1->next->next->next = malloc(sizeof(struct element));
    Lista1->next->next->next->value = 2;
    Lista1->next->next->next->next = malloc(sizeof(struct element));
    Lista1->next->next->next->next->value = 3;
    Lista1->next->next->next->next->next = NULL;

    wyswietl(Lista1);
    pomnoz_nieparzyste(Lista1, 2);
    wyswietl(Lista1);

    return 0;
}

