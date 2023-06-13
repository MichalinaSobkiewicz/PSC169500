#include <stdio.h>
#include <stdlib.h>

struct elem
{
    int x;
    struct elem* next;
};

void podwoj_dodatnie(struct elem* lista)
{
    struct elem* aktualny = lista;

    while (aktualny != NULL)
    {
        if (aktualny->x > 0)
        {
            aktualny->x = aktualny->x * 2;
        }

        aktualny = aktualny->next;
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
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct elem* lista1 = malloc(sizeof(struct elem));
    lista1->x = 4;
    lista1->next = malloc(sizeof(struct elem));
    lista1->next->x = -3;
    lista1->next->next = malloc(sizeof(struct elem));
    lista1->next->next->x = -2;
    lista1->next->next->next = malloc(sizeof(struct elem));
    lista1->next->next->next->x = 5;
    lista1->next->next->next->next = NULL;  // Set the next pointer of the last element to NULL

    wyswietl(lista1);
    podwoj_dodatnie(lista1);
    wyswietl(lista1);

    // Clean up memory
    struct elem* current = lista1;
    while (current != NULL)
    {
        struct elem* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
