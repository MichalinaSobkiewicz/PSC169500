#include <stdio.h>

// Typ wyliczeniowy Sklep przechowujący różne sklepy
enum Sklep {
  Sklep1,
  Sklep2,
  Sklep3,
  Sklep4,
  Sklep5,
  Sklep6
};

int main() {
  // Tablica 6 elementów typu Sklep
  const char* sklepy[6] = {"Lidl", "Biedronka", "Lewiatan", "Zabka", "Aldi", "Stokrotka"};

  // Wypisanie zawartości tablicy używając instrukcji warunkowej switch case
  for (int i = 0; i < 6; i++)
    {
    switch (i) {
      case Sklep1:
        printf("Sklep 1: %s\n", sklepy[i]);
        break;
      case Sklep2:
        printf("Sklep 2: %s\n", sklepy[i]);
        break;
      case Sklep3:
        printf("Sklep 3: %s\n", sklepy[i]);
        break;
      case Sklep4:
        printf("Sklep 4: %s\n", sklepy[i]);
        break;
      case Sklep5:
        printf("Sklep 5: %s\n", sklepy[i]);
        break;
      case Sklep6:
        printf("Sklep 6: %s\n", sklepy[i]);
        break;
      default:
        printf("Nieznany sklep\n");
        break;
    }
  }
}

