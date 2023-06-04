#include <stdio.h>

enum Telewizor {
  telewizor1,
  telewizor2,
  telewizor3,
  telewizor4,
  telewizor5,
  telewizor6
};

int main() {
  char marki[6][20] = {
    "LG",
    "Panasonic",
    "Samsung",
    "Philips",
    "Toshiba",
    "Sony"
  };

  for (int i = 0; i < 6; i++)
    {
    switch (i)
    {
      case telewizor1:
        printf("Sklep 1: %s\n", marki[i]);
        break;
      case telewizor2:
        printf("Sklep 2: %s\n", marki[i]);
        break;
      case telewizor3:
        printf("Sklep 3: %s\n", marki[i]);
        break;
      case telewizor4:
        printf("Sklep 4: %s\n", marki[i]);
        break;
      case telewizor5:
        printf("Sklep 5: %s\n", marki[i]);
        break;
      case telewizor6:
        printf("Sklep 6: %s\n", marki[i]);
        break;
      default:
        printf("Nieznany sklep\n");
        break;
    }
  }

  return 0;
}
