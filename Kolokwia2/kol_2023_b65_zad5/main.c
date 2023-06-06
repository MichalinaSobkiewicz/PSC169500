#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ GŁOWY
struct node
{
    int num;
    struct node * next;
};


void odejmijoddodatnich (struct node* lista, int d)
{
    struct node*wsk = lista;

    while(wsk != NULL)
    {
        if (wsk->num>0)
        {
            wsk->num -=d;
        }
        wsk=wsk->next;
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
        printf("%d\n", wsk->num);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct node*lista = malloc(sizeof(struct node));
    lista->num= 4;
    lista->next= malloc(sizeof(struct node));
    lista->next->num= -2;
    lista->next->next=malloc(sizeof (struct node));
    lista->next->next->num=5;
    lista->next->next->next=NULL;

    wyswietl(lista);
    odejmijoddodatnich(lista,4);
    wyswietl(lista);

    return 1;
}
