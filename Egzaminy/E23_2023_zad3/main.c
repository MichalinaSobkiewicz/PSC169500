#include <stdio.h>
#include <stdlib.h>

struct Album
{
    char nazwa[100];
    int liczba_utworow;
};

//funkcja na dlugosc
int dlugosc(const char* str)
{
    int len = 0;
    while (str[len] != 0)
    {
        len++;
    }
    return len;
}

//kopiowanie znakow z jednej tablicy do drugiej
void myStrCpy(char* dest, const char* src)
{
    int i = 0;
    while (src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
}

struct Album* initAlbum(const char* nazwa, int liczba_utworow)
{
    if (dlugosc(nazwa) < 3 || liczba_utworow <= 1)
    {
        return NULL;
    }

    struct Album* album = malloc(sizeof(struct Album));
    myStrCpy(album->nazwa, nazwa);
    album->liczba_utworow = liczba_utworow;

    return album;
}

void dodajUtwory(struct Album* album)
{
    album->liczba_utworow += 5;
}

int main()
{
    struct Album* album1 = initAlbum("Album 1", 10);
    if (album1 != NULL) {
        printf("Utworzono album: %s, liczba utworow: %d\n", album1->nazwa, album1->liczba_utworow);
    } else {
        printf("Blad: \n");
    }

    // Przykład użycia funkcji dodajUtwory
    struct Album album2;
    myStrCpy(album2.nazwa, "Album 2");
    album2.liczba_utworow = 8;

    printf("Przed dodaniem utworow: %s, liczba utworow: %d\n", album2.nazwa, album2.liczba_utworow);
    dodajUtwory(&album2);
    printf("Po dodaniu utworow: %s, liczba utworow: %d\n", album2.nazwa, album2.liczba_utworow);

    return 0;
}

