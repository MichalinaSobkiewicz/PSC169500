#include <stdio.h>
#include <stdlib.h>

int main()
{
  float liczba1, liczba2;
  char dzialanie;

  printf("Podaj pierwsza liczbe: ");
  scanf("%f", & liczba1);

  printf("Podaj druga liczbe: ");
  scanf("%f", & liczba2);

  printf("Wybierz sposrod podanych symbol dzialania ktore chcesz wykonac + lub - lub * lub /:");
  scanf("%c", & dzialanie);

float wynik;

  switch(dzialanie)
  {
  case '+':
    wynik = liczba1 + liczba2;
    scanf("%f + %f = %f", liczba1, liczba2, wynik);
    break;

  case '-':

    scanf("%f - %f = %f", liczba1, liczba2, wynik);
    break;

  case '*':

    scanf("%f * %f = %f", liczba1, liczba2, wynik);
    break;

  case '/':

    scanf("%f / %f = %f", liczba1, liczba2, wynik);
    break;

  default:
    scanf("Operacja spoza dozwolonego zbioru działań");

  }
  printf("Nasz wynik to: %f\n", wynik);
  return 1;
}

