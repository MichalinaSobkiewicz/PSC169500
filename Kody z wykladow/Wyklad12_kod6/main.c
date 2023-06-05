#include <stdio.h>
#include <stdlib.h>
//dodawanie elementow na początek- lista bez głowy
//Rezerwacja pamięci na nowy element
//Ustawienia wartości pola i na nowym elemencie z punktu 1
//Pole next nowego elementu z punktu 1 jest ustawiane jako adres pierwszej elementu początkowej listy
//Należy zmienić wskaźnik całej „listy” wskazując jako adres „nowy” element z punktu 1.

#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
     struct element * lista = NULL; //tworzymy "pustą listę"

     //dodajemy pierwszy element na listę (tu pojęcie koniec czy początek nie ma większego sensu)
     struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk->i=-4;
     wsk->next=NULL; //bo nic więcej nie ma na liście

     lista=wsk; // ustawiamy wskaznik początku listy
     // dodajemy nowy element na początek
     struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk2->i=7;
     wsk2->next=lista; // następnik nowego elementu to bieżacy wskaznik listy
     lista=wsk2;  // ustawiamy wskaznik nowego elementy jako początek listy
     // dodajemy jeszcze jeden nowy element na początek
     struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk3->i=5;
     wsk3->next=lista; // następnik nowego elementu to bieżacy wskaznik listy
     lista=wsk3;  // ustawiamy wskaznik nowego elementy jako początek listy
     //tu już mamy listę jak na rysunku - pierwszy eleemnt yo 5, drugi to 7, trzeci to i 4
     // teraz dodajemy 11 na początek
     struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk4->i=11;
     wsk4->next=lista; // następnik nowego elementu to bieżacy wskaznik listy
     lista=wsk4;  // ustawiamy wskaznik nowego elementy jako początek listy
     return 0;
}
