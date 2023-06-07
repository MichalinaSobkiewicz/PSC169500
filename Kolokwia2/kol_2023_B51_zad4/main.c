#include <stdio.h>
#include <stdlib.h>

enum Movie{A,B,C,D,E,F};

int main()
{
    enum Movie tab[6] = {A,B,C,D,E,F};


    for(int i=0;i<6;i++){
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
            break;
        case F:
            printf("F\n");
        }
    }
}
