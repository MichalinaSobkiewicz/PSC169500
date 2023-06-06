#include <stdio.h>
#include <stdlib.h>

//LISTA BEZ GŁOWY
struct node
{
    int val;
    struct node * next;
};

int ile_rownych(struct node* lista, int b)
{
    int suma=0;
    struct node* wsk=lista;
    while(wsk!=NULL)
    {
        if(wsk->val == b)
        {
            suma++;
        }
        wsk=wsk->next;
    }
    return suma;
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
        printf("%d\n", wsk->val);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct node* l = malloc(sizeof(struct node));
    l->val=4;
    l->next=malloc(sizeof(struct node));
    l->next->val=6;
    l->next->next=malloc(sizeof(struct node));
    l->next->next->val=8;
    l->next->next->next= malloc(sizeof(struct node));
    l->next->next->next->val=10;
    l->next->next->next->next=NULL;

    wyswietl(l);
    int wynik= ile_rownych(l, 4);
    printf("Liczba wystapien to %d\n", wynik);

}
