#include <stdio.h>
#include <stdlib.h>

void przepisz(char* napis1,char* napis2,int n)
{
    int j=0;
    for(int i=n-1;napis1[i]!='\0';i+=n)
    {
        napis2[j]=napis1[i];
        j++;
    }
    napis1[j]='\0';
}

int main()
{
    char napis1[]="abcdefghijklml";
    char napis2[100];
    przepisz(napis1,napis2,3);
    printf("%s\n",napis2);
    return 0;
}
