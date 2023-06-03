#include <stdio.h>
#include <stdlib.h>

// Definicja struktury
struct Punkt2D
{
    float x;
    float y;
};

int main() {
    // Alokacja pamięci dla struktury Punkt2D
    struct Punkt2D *punkt = (struct Punkt2D *)malloc(sizeof(struct Punkt2D));
    //analogicznie do poprzednich kodów

    // Przypisanie wartości do pól struktury poprzez wskaźnik
    //strzałka oznacza dereferencje wskaźnika
    punkt->x = 3.0;
    punkt->y = 4.0;

    printf("Punkt przed przesunieciem: (%.1f, %.1f)\n", punkt->x, punkt->y);

    // Przesunięcie punktu o wektor (2.0, 3.0)
    punkt->x += 2.0;
    punkt->y += 3.0;

    printf("Punkt po przesunieciu: (%.1f, %.1f)\n", punkt->x, punkt->y);

    // Zwolnienie zaalokowanej pamięci- WYMAGANE (przy tablicach i napisach nie trzeba było)
    free(punkt);

    return 0;
}
