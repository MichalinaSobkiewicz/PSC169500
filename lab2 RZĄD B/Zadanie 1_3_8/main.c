#include <stdio.h>
#include <stdlib.h>


int main()
{
   int figura;
   float a, b, h, pole;

   printf("Wybierz figure gdzie 1 to kwadrat, 2 to prostokat, a 3 to trojkat:\n");

   scanf("%d", &figura);

   switch(figura)
   {
      case 1:
         printf("Podaj bok kwadratu:\n");
         scanf("%f", &a);
         pole = a * a;
         break;

      case 2: // Prostokąt
         printf("Podaj boki prostokata:\n");
         scanf("%f%f", &a, &b);
         pole = a * b;
         break;

      case 3: // Trójkąt
         printf("Podaj podstawe i wysokosc trojkata:\n");
         scanf("%f%f", &a, &h);
         pole = (a * h)/2;
         break;

      default:
         printf("Niepoprawna liczba.\n");
         return 1;
   }

   printf("Pole figury to: %f\n", pole);

   return 0;
}
