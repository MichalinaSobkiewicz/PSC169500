#include <stdio.h>
#include <stdlib.h>

enum Food{A, B, C, D,E,F};


int main()
{
    enum Food tab[6]={A, B, C, D, E};

    for (int i=0; i <5; i++)
    {
        switch(tab[i])
        {
        case A:
            printf("A\n");
            break;
        case B:
            printf("B\n");
            break;
        case C:
            printf("C\n");
            break;
        case D:
            printf("D\n");
            break;
        case E:
            printf("E\n");

        }
    }
}
