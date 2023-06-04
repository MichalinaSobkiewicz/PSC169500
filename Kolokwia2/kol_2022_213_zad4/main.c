#include <stdio.h>
#include <stdlib.h>

enum Movie {film1, film2, film3, film4, film5, film6};

int main()
{
    char gatunki [6][50]= {"Horror", "Przygodowy", "Wojenny", "Komedia", "Dramat", "Kryminal"};

    for(int i=0;i < 6; i++)
    {
        switch(i)
    {

    case film1:
        printf("%s\n", gatunki[i]);
        break;

    case film2:
        printf("%s\n", gatunki[i]);
        break;

     case film3:
        printf("%s\n", gatunki[i]);
        break;

     case film4:
        printf("%s\n", gatunki[i]);
        break;

    case film5:
        printf("%s\n", gatunki[i]);
        break;

    case film6:
        printf("%s\n", gatunki[i]);
        break;

    default:
        printf("Nieznany film\n");
        break;
    }

    }
    return 0;
}
