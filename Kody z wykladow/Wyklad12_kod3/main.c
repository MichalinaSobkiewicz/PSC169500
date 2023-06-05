#include <stdio.h>
#include <stdlib.h>
//LISTY BEZ GŁOWY

//Lista bez głowy (Headless List): W liście bez głowy, pierwszy element listy przechowuje rzeczywiste dane.
//W przeciwieństwie do listy z głową, nie ma dodatkowego elementu wskazującego na początek listy. W tym przypadku,
//musimy zwracać szczególną uwagę na specjalne przypadki,
//takie jak dodawanie lub usuwanie elementu z początku listy, szczególnie kiedy lista jest pusta.

//W przypadku listy z głową gdy dodajemy element do zdefiniowanej juz listy
//adresy wszystkich elementow sie zmieniają

//definiujemy strukture (liste)
struct element
{
    int i;
    struct element *next;
};

int main()
{
    // stwórz listę bez głowy o elementach 5,7,-4
    struct element * lista = malloc(sizeof(struct element));
    //tworzymy wskaźnik  o wielkości takiej jakiej potrzebuje struct element
    //wszystko trafia na sterte!!!

    //strzałke mozemy rozumiec jako go to
    //''idz do i i ustaw wartosc 5"
    lista->i = 5;

    //''ustaw nastepnik, zarezerwuj na niego miejsce"
    lista->next = malloc(sizeof(struct element));

    //''idz do kolejnego elementu, idz do kolejnego pola i i ustaw 7"
    lista->next->i = 7;

    //dalej analogicznie
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -4;

    //na koncu ustawiamy wartosc NULL
    lista->next->next->next = NULL;

    //pętla do wyswietlania listy
    struct element * wsk = lista;
    while(wsk != NULL)
        //''idz do kolejnego elementu az nie natrafisz na NULLa"
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}
