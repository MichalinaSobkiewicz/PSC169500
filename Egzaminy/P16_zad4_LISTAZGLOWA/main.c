#include <stdio.h>
#include <stdlib.h>

struct node
{
    int y;
    struct node* next;
};

void dodajargumentdolisty(int a, int b, struct node* lista)
{

    struct node* nowalista = malloc(sizeof(struct node));
    //umieszczam a na 1 miejscu w nowej liscie
    nowalista->y = a;

    struct node* pierwszyel = lista->next;
    nowalista->next = pierwszyel;
    //ustawiam nowy uklad elementow z a na poczatku jako domyslna liste
    lista->next = nowalista;

    struct node* drugiel = malloc(sizeof(struct node));
    drugiel->y = b;
    drugiel->next = nowalista->next;
    nowalista->next = drugiel;

}

void wyswietlListeZGlowa(struct node* lista)
{
    struct node* wsk = lista->next;

    if (wsk == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    while (wsk != NULL)
    {
        printf("%d\n", wsk->y);
        wsk = wsk->next;
    }

    printf("---\n");
}

int main()
{
    struct node* lista = malloc(sizeof(struct node));
    lista->next = malloc(sizeof(struct node));
    lista->next->y = 3;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->y=4;
    lista->next->next->next=NULL;

    wyswietlListeZGlowa(lista);
    dodajargumentdolisty(1, 2, lista);
    wyswietlListeZGlowa(lista);

    return 0;
}

