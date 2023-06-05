#include <stdio.h>
#include <stdlib.h>

//dodawanie elementow na początek- lista z głową
//Rezerwujemy pamięć na nowy element
//Ustawiamy wartość jako pole i
//Pole next ustawiamy jako to co znajduje się w „głowie” w polu next
//Modyfikujemy pole next w „głowie” ustawiając je jako wskaźnik na nowy element z punktu 1

struct element
{
    int i;
    struct element * next;
};

int main()
{
     //tworzymy głowę
     struct element * lista = malloc(sizeof(struct element));
     //pola i glowy nie ustawiamy
     lista->next= NULL; //następnik glowy jest na NULL, mamy zatem w tym miejscu pustą listę z głową
     //dodajemy pierwszy element na listę - w liscie z głową musimy go postawić po głowie
     struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk->i=-4;
     wsk->next=lista->next; //tutaj teoretycznie można ustawić na NULL, ale zgodnie z konwencją trzeba ustawić pole next głowy
     lista->next=wsk; // ustawiamy nastepnik glowy jako wskaznik na nowy element
     // dodajemy nowy element na początek
     struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk2->i=7;
     wsk2->next=lista->next; // następnik nowego elementu to nastepnik "głowy"
     lista->next=wsk2;  // ustawiamy następnik głowy jako wskaźnik na nowy element
     // dodajemy jeszcze jeden nowy element na początek
     struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk3->i=5;
     wsk3->next=lista->next; // następnik nowego elementu to nastepnik "głowy"
     lista->next=wsk3;  // ustawiamy następnik głowy jako wskaźnik na nowy element
     //tu już mamy listę jak na rysunku - "głowa", pierwszy eleemnt to 5, drugi to 7, trzeci to i 4
     // teraz dodajemy 11 na początek
     struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamięci na jeden z elementów
     wsk4->i=11;
     wsk4->next=lista->next; // następnik nowego elementu to nastepnik "głowy"
     lista->next=wsk4;  // ustawiamy następnik głowy jako wskaźnik na nowy element
     return 0;
}
