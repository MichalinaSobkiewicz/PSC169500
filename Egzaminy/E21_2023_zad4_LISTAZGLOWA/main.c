#include <stdio.h>
#include <stdlib.h>

struct node
{
    char z;
    struct node* next;
};

char* utworznapis(struct node* lista)
{
    int dlugosc = 0;
    struct node* nastepnik = lista;

    while (nastepnik != NULL)
    {
        dlugosc++;
        nastepnik = nastepnik->next;
    }

    char* wynik = (char*)malloc((dlugosc + 1) * sizeof(char));
    //dodajemy +1 aby zalokować pamięc na element \0
    int indeks = 0;

    while (lista != NULL)
    {
        wynik[indeks++] = lista->z;
        lista = lista->next;
    }

    wynik[dlugosc] = '\0';

    return wynik;
}

int main()
{
    struct node* lista = malloc(sizeof(struct node));
    lista->z = 'K';
    lista->next = malloc(sizeof(struct node));
    lista->next->z = 'o';
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->z = 't';
    lista->next->next->next = malloc(sizeof(struct node));
    lista->next->next->next->z = 'e';
    lista->next->next->next->next = malloc(sizeof(struct node));
    lista->next->next->next->next->z = 'k';
    lista->next->next->next->next->next = NULL;

    char* nasznapis = utworznapis(lista);
    printf("Napis z listy: %s\n", nasznapis);

    // Zwolnienie pamięci
    struct node* current = lista;
    while (current != NULL)
    {
        struct node* next = current->next;
        free(current);
        current = next;
    }
    free(nasznapis);

    return 0;
}

