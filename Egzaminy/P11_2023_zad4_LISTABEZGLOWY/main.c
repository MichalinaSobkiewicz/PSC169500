#include <stdio.h>
#include <stdlib.h>

struct element
{
    float value;
    struct element *next;
};

void zamien_na_bezwz(struct element *lista)
{
    struct element *aktualny = lista;
    while (aktualny != NULL)
    {
        if (aktualny->value < 0)
        {
            aktualny->value = -aktualny->value;
        }
        aktualny = aktualny->next;
    }
}

int main()
{
    struct element *Lista1 = malloc(sizeof(struct element));
    Lista1->next = malloc(sizeof(struct element));
    Lista1->value = 2.5;
    Lista1->next->value = -4.7;
    Lista1->next->next = malloc(sizeof(struct element));
    Lista1->next->next->value = 6.8;
    Lista1->next->next->next = malloc(sizeof(struct element));
    Lista1->next->next->next->value = -9.2;
    Lista1->next->next->next->next = NULL;

    zamien_na_bezwz(Lista1);

    struct element *aktualny = Lista1;
    while (aktualny != NULL)
    {
        printf("%f ", aktualny->value);
        aktualny = aktualny->next;
    }
    printf("\n");

    return 0;
}
