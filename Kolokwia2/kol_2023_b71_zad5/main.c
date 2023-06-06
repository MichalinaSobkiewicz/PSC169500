#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ GŁOWY
struct node
{
    int val;
    struct node* next;
};

void wiekszeod1(struct node* lista)
{
    if (lista == NULL || lista->next == NULL)
    {
        return;
    }

    struct node* wsk = lista;
    while (wsk != NULL)
    {
        if (wsk->next != NULL && wsk->next->val > wsk->val)
        {
            printf("%d\n", wsk->next->val);
        }
        wsk = wsk->next;
    }
}


int main()
{
    struct node* lista = malloc(sizeof(struct node));
    lista->val = 3;
    lista->next = malloc(sizeof(struct node));
    lista->next->val = 2;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->val = 6;
    lista->next->next->next = malloc(sizeof(struct node));
    lista->next->next->next->val = 15;
    lista->next->next->next->next = NULL;

    wiekszeod1(lista);

    printf("---\n");


    //Gdy mniej niż 2 elementy
    struct node* lista2 = malloc(sizeof(struct node));
    lista2->val = 8;
    lista2->next = NULL;

    wiekszeod1(lista2);



    return 0;
}


