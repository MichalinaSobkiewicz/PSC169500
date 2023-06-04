#include <stdio.h>

union XYZ {
  int a;
  char b;
};

int main() {
  union XYZ arr[6]; // Tablica 6 elementów typu XYZ

  // Inicjalizacja elementów tablicy
  arr[0].a = 1;
  arr[0].b = 'A';
  arr[1].a = 2;
  arr[1].b = 'B';
  arr[2].a = 3;
  arr[2].b = 'C';
  arr[3].a = 4;
  arr[3].b = 'D';
  arr[4].a = 5;
  arr[4].b = 'E';
  arr[5].a = 6;
  arr[5].b = 'F';

  // Wypisanie zawartości tablicy
  for (int i = 0; i < 6; i++)
{
    printf("Element %d: a = %d, b = %c\n", i, arr[i].a, arr[i].b);
  }

  return 0;
}
