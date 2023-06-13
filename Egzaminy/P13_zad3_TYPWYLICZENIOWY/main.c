#include <stdio.h>
#include <stdlib.h>

enum Food { Spaghetti, Pizza, Sushi, Burger, Salad };

int main()
{
    enum Food tab[5] = { Spaghetti, Pizza, Sushi, Burger, Salad };

    const char* nazwyjedzenia[] = { "Spaghetti", "Pizza", "Sushi", "Burger", "Salad" };


    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", nazwyjedzenia[tab[i]]);
    }

    return 0;
}

