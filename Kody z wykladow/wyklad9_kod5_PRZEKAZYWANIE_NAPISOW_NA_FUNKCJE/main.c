#include <stdio.h>
#include <stdlib.h>

//z for
int dlugosc1(char*napis)
{
   int i;
   for(i=0; napis[i] !=0; i++)
   {

   }
   return i;
}


//z while
int dlugosc2(char*napis)
{
    int i=0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}

int dlugosc3(char* napis)
{
    if(napis[0]==0)
        return 0;
    return 1+dlugosc3(++napis);
}

int main()
{
    char napis1[20]= "Olsztyn";
    printf("%d\n",dlugosc1(napis1));


    char napis2[20]= "Torun";
    printf("%d\n", dlugosc2(napis2));

    char napis3[20]= "Warszawa";
    printf("%d\n",dlugosc3(napis3));

    return 0;

}
