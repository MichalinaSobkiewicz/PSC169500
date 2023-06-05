#include <stdio.h>
#include <stdlib.h>
//LISTY Z GŁOWĄ

//Lista z głową (Headed List): Lista z głową ma dodatkowy element, zwykle nazywany “głową” lub “dummy node”,
//który nie przechowuje żadnych danych, ale służy jako punkt odniesienia do początku listy.
//Głowa listy wskazuje na pierwszy element listy zawierający rzeczywiste dane. Przy korzystaniu z listy z głową,
//operacje takie jak dodawanie elementu na początek listy lub usuwanie elementu z początku listy stają się prostsze, ponieważ nie musimy martwić się o specjalne przypadki, kiedy lista jest pusta.


//W przypadku listy z bez głowy
//adresy wszystkich elementow zostaja nie zmienione

struct element
{
    int i;
    struct element *next;
};

int main()
{
    // stwórz listę z głową o elementach 5,7,-4
    struct element * lista = malloc(sizeof(struct element));

    //MUSIMY ZALOKOWAĆ PAMIĘĆ NA GŁOWĘ:
    lista->next = malloc(sizeof(struct element));

    //na 1 miejsu w pamieci stoi głowa, wiec musimy przejsc do kolejnego elementu
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;

    //wyswietl listę- pewna konwencja
    struct element * wsk = lista->next;
    //wyswietlanie zaczynamy od następnika listy (pomijamy głowe)
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}
