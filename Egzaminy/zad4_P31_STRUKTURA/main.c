#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node* next;
};

void wyswietlkwadraty(struct node* lista)
{
    struct node* wsk1 = lista->next;
    struct node* poprzedni = lista;

    while (wsk1 != NULL)
    {
        int x = wsk1->i;

        // Sprawdzenie czy x jest kwadratem liczby całkowitej
        int pierwiastek = 0;
        while (pierwiastek * pierwiastek < x)
        {
            pierwiastek++;
        }

        if (pierwiastek * pierwiastek == x)
        {
            poprzedni->next = wsk1;
            poprzedni = wsk1;
        }
        else
        {
            struct node* do_usuniecia = wsk1;
            wsk1 = wsk1->next;
            free(do_usuniecia);
            continue;
        }

        wsk1 = wsk1->next;
    }

    poprzedni->next = NULL;
}

int main() {
    struct node* lista1 = malloc(sizeof(struct node));
    lista1->next = malloc(sizeof(struct node));
    lista1->next->next = malloc(sizeof(struct node));
    lista1->next->i = 4;
    lista1->next->next->i = 25;
    lista1->next->next->next = malloc(sizeof(struct node));
    lista1->next->next->next->i = 6;
    lista1->next->next->next->next = malloc(sizeof(struct node));
    lista1->next->next->next->next->i = -34;
    lista1->next->next->next->next->next = NULL;

    wyswietlkwadraty(lista1);

    struct node* wsk = lista1->next;
    while (wsk != NULL) {
        printf("%d ", wsk->i);
        wsk = wsk->next;
    }

    return 0;
}

