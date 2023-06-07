#include <stdio.h>
#include <stdlib.h>

struct node
{
    double z;
    struct node * next;
};

void powiekszujemne(struct node* lista, int c)
{
    struct node* wsk=lista->next;

    while(wsk != NULL)
    {
        if(wsk->z<0)
        {
            wsk->z += c;
        }
        wsk=wsk->next;
    }
}

void wyswietl(struct node* lista)
{
    struct node* wsk = lista->next;

    if(wsk==NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }
    while(wsk!=NULL)
    {
        printf("%lf\n", wsk->z);
        wsk=wsk->next;
    }
    printf("\n");
}

int main()
{
    struct node* lista= malloc(sizeof(struct node));
    lista->next=malloc(sizeof(struct node));

    lista->next->z=4;
    lista->next->next=malloc(sizeof(struct node));
    lista->next->next->z=-12;
    lista->next->next->next=NULL;

    wyswietl(lista);
    powiekszujemne(lista, 1);
    wyswietl(lista);

    return 0;
}
