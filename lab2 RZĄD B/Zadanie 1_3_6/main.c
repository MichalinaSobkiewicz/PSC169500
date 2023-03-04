#include <stdio.h>
#include <stdlib.h>

//DO PRZEMYSLENIA JESZCZE!!!

int main()
{
   float a1, b1, c1, a2, b2, c2;
   float x,y;
   float wyznacznik;

   // Wczytaj współczynniki równań
   printf("Podaj wspolczynniki rownan:\n");
   scanf("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2);

   // Oblicz wyznacznik macierzy
   wyznacznik = a1 * b2 - a2 * b1;

   // Sprawdź, czy rozwiązanie istnieje
   if (wyznacznik == 0) {
      if (c1 / a1 == c2 / a2) {
         printf("Uklad ma nieskonczenie wiele rozwiazan.\n");
      } else {
         printf("Uklad nie ma rozwiazan.\n");
      }
   } else {
      // Oblicz rozwiązania układu równań
      x = (b2 * c1 - b1 * c2) / wyznacznik;
      y = (a1 * c2 - a2 * c1) / wyznacznik;
      printf("Rozwiazanie ukladu to:\n x = %.2f\n y = %.2f\n", x, y);
   }

   return 0;
}
