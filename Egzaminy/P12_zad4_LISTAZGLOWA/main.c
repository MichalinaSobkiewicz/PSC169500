#include <stdio.h>
#include <stdlib.h>

struct node
{
    float val;
    struct node *next;
};

void zamien_na_bezwz(struct node *lista)
{
    struct node *aktualny = lista->next;
    while (aktualny != NULL)
    {
        if (aktualny->val < 0)
        {
            aktualny->val = -aktualny->val;
        }
        aktualny = aktualny->next;
    }
}

int main()
{
    struct node* Lista1 = malloc(sizeof(struct node));
    Lista1->next = malloc(sizeof(struct node));
    Lista1->next->val = 11;
    Lista1->next->next = malloc(sizeof(struct node));
    Lista1->next->next->val = -4;
    Lista1->next->next->next = malloc(sizeof(struct node));
    Lista1->next->next->next->val = 6;
    Lista1->next->next->next->next = NULL;

    zamien_na_bezwz(Lista1);

    struct node *aktualny = Lista1->next;  // Rozpoczynamy od drugiego elementu
    while (aktualny != NULL)
    {
        printf("%f ", aktualny->val);
        aktualny = aktualny->next;
    }
    printf("\n");

    return 0;
}

