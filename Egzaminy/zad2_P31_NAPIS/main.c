#include <stdio.h>
#include <stdlib.h>

int dlugoscnapisu(char*napis)
{
    int dlugosc=0;

    for(int i=0; napis[i]!=0;i++)
    {
        dlugosc++;

    }

    for(int j=0; napis[j]!=0; j++)
    {
        int cyfra= napis[j];
        if(cyfra>='0' && cyfra<='9')
        {
            if(cyfra%2==0)
            {
                dlugosc++;

            }
        }
    }
    return dlugosc;
}
int main()
{
    char*napis="kod2468";
    int naszadlugosc=dlugoscnapisu(napis);
    printf("%d", naszadlugosc);
}
