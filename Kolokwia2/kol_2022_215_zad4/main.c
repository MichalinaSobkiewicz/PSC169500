#include <stdio.h>
#include <stdlib.h>

enum Gra {gra1, gra2, gra3, gra4, gra5, gra6};

int main()
{
    char tytuly[6][50] = {"The Sims 1", "The Sims 2", "The Sims 3", "The Sims 4", "Minecraft", "Wiedzmin 3"};

    for(int i = 0; i < 6; i++)
    {
        switch(i)
        {
            case gra1:
                printf("%s\n", tytuly[i]);
                break;

            case gra2:
                printf("%s\n", tytuly[i]);
                break;

            case gra3:
                printf("%s\n", tytuly[i]);
                break;

            case gra4:
                printf("%s\n", tytuly[i]);
                break;

            case gra5:
                printf("%s\n", tytuly[i]);
                break;

            case gra6:
                printf("%s\n", tytuly[i]);
                break;

            default:
                printf("Nieznany film\n");
                break;
        }
    }

    return 0;
}

