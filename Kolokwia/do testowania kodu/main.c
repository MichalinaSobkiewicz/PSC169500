#include <stdio.h>
#include <stdlib.h>

enum Gra{gra1,gra2,gra3,gra4,gra5,gra6};

int main()
{
    enum Gra tab[6] = {"The Sims","Wiedźmin", "SimCity", "CS", "Forza","Minecraft"};
    for(int i=0;i<6;i++){
        switch(tab[i]){
        case gra1:
            printf("gra1\n");
            break;
        case gra2:
            printf("gra2\n");
            break;
        case gra3:
            printf("gra3\n");
            break;
        case gra4:
            printf("gra4\n");
            break;
        case gra5:
            printf("gra5\n");
            break;
        case gra6:
            printf("gra6\n");
        }
    }
}

