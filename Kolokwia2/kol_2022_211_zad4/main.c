#include <stdio.h>

union Test
{
  int a;
  float b;
};

int main() {
  union Test arr[6]; // Tablica 6 elementów typu Test

  // Inicjalizacja elementów tablicy
  arr[0].a = 1;
  arr[0].b = 1.1;
  arr[1].a = 2;
  arr[1].b = 2.2;
  arr[2].a = 3;
  arr[2].b = 3.3;
  arr[3].a = 4;
  arr[3].b = 4.4;
  arr[4].a = 5;
  arr[4].b = 5.5;
  arr[5].a = 6;
  arr[5].b = 6.6;

  // Wypisanie zawartości tablicy
  for (int i = 0; i < 6; i++)
{
    printf("Element %d: a = %d, b = %f\n", i, arr[i].a, arr[i].b);
  }

  return 0;
}

