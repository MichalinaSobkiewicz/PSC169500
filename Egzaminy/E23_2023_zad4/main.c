#include <stdio.h>
#include <stdlib.h>

struct element {
    int a;
    struct element* next;
};

struct element* polaczListy(struct element* lista1, struct element* lista2) {
    if (lista1 == NULL)
    {
        return lista2;
    }

    struct element* polaczona = lista1;
    while (polaczona->next != NULL)
    {
        polaczona = polaczona->next;
    }
    polaczona->next = lista2;

    return lista1;
}

void wyswietlListe(struct element* lista)
{
    struct element* polaczona = lista;
    while (polaczona != NULL)
    {
        printf("Adres: %p, Wartosc: %d\n", polaczona, polaczona->a);
        polaczona = polaczona->next;
    }
}

int main() {
    struct element* lista1 = malloc(sizeof(struct element));
    lista1->a = 5;
    lista1->next = malloc(sizeof(struct element));
    lista1->next->a = 12;
    lista1->next->next = NULL;

    struct element* lista2 = malloc(sizeof(struct element));
    lista2->a = 54;
    lista2->next = malloc(sizeof(struct element));
    lista2->next->a = -3;
    lista2->next->next = malloc(sizeof(struct element));
    lista2->next->next->a = 11;
    lista2->next->next->next = NULL;

    struct element* nowaLista = polaczListy(lista1, lista2);

    printf("Lista po polaczeniu:\n");
    wyswietlListe(nowaLista);

    return 0;
}
