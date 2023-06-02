#include <stdio.h>


//WCZYTYWANIE NAPISÓW
//scanf- dla aplikacji konsolowych, basic totalny dlatego go używamy
//gets
//fgets

int main()
{
    char slowo1[20];
    scanf("%s",slowo1);
    printf("%s\n",slowo1);

    //char slowo2[5];
    //gets(slowo2);
    //printf("%s\n",slowo2);
    //puts(slowo2);

    //char slowo[5];
    //gets_s(slowo, 4*sizeof(char));
    //printf("%s\n", slowo);
    //puts(slowo);

    return 0;
}
