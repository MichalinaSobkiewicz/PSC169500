#include <stdio.h>
#include <stdlib.h>

int main()
{
  float liczba1, liczba2;
  float wynik;
  char dzialanie;

  printf("Podaj pierwsza i druga liczbe: ");
  scanf("%f %f", &liczba1, &liczba2);


  printf("Wybierz sposrod podanych symbol dzialania ktore chcesz wykonac + lub - lub * lub /:");
  scanf(" %c", &dzialanie);

  switch(dzialanie)
  {
    case '+':
      wynik = liczba1 + liczba2;
      printf("%f + %f = %f", liczba1, liczba2, wynik);
      break;

    case '-':
      wynik = liczba1 - liczba2;
      printf("%f - %f = %f", liczba1, liczba2, wynik);
      break;

    case '*':
      wynik = liczba1 * liczba2;
      printf("%f * %f = %f", liczba1, liczba2, wynik);
      break;

    case '/':
      wynik = liczba1 / liczba2;
      printf("%f / %f = %f", liczba1, liczba2, wynik);
      break;

    default:
      printf("Operacja spoza dozwolonego zbioru działań");
  }

  printf("\nNasz wynik to: %f\n", wynik);
  return 0;
}
