#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, char* napis1,char* napis2)
{
    int j=0;
    for(int i=n-1; napis1[i]!=0;i+=n)
    {
        napis2[j]=napis1[i];
        j++;
    }

}

int main()
{
    char napis1[]="abcdefghijklml";
    char napis2[100];
    przepisz(3,napis1,napis2);
    printf("%s\n", napis1);
    printf("%s\n",napis2);
    return 0;
}
