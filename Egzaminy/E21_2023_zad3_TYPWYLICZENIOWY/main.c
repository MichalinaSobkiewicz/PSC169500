#include <stdio.h>
#include <stdlib.h>

enum Kwiat{A,B,C,D,E};

int main()
{
    enum Kwiat tab[5] = {A,B,C,D,E};

    const char* gatunki_kwiatow[] = { "Irys", "Stokrotka", "Storczyk", "Fiołek", "Chaber"};

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", gatunki_kwiatow[tab[i]]);
    }

    for(int i=0;i<5;i++)
    {
        switch(tab[i]){
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
