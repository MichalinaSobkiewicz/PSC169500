#include <stdio.h>

void odwrocenie(int n, int m, int tab[n][m])
{
  for (int j = 1; j < m; j += 2)
    {
    int i = 0, k = n - 1;
    while (i < k)
    {
      int temp = tab[i][j];
      tab[i][j] = tab[k][j];
      tab[k][j] = temp;
      i++;
      k--;
    }
  }
}

int main() {
  int tablica[4][3] = {
    {2, 3, -3},
    {1, 4, 7},
    {-3, -6, 11},
    {-2, 8, 23}
  };

  // Wyświetlanie tablicy przed odwróceniem
  printf("Tablica przed odwróceniem:\n");
  for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", tablica[i][j]);
    }
    printf("\n");
  }

  // Wywołanie funkcji odwrocenie
  odwrocenie(4, 3, tablica);

  // Wyświetlanie tablicy po odwróceniu
  printf("\nTablica po odwróceniu:\n");
  for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 3; j++)

    {
      printf("%d ", tablica[i][j]);
    }
    printf("\n");
  }

  return 0;
}
