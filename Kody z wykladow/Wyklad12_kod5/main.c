#include <stdio.h>
#include <stdlib.h>

//pusta lista bez głowy

struct element
{
    int i;
    struct element *next;
};

int main()
{
    struct element * lista = NULL;
    return 0;
}

//pusta lista z głową

#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = NULL;
    return 0;
}
