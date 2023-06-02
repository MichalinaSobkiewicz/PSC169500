#include <stdio.h>
#include <stdlib.h>

char* foo()
{
    char * temp=(char*)malloc(sizeof(char)*10);
    //musimy zarezerwować pamiec!
    temp[0]='w';
    temp[1]='$';
    temp[2]='a';
    temp[3]='\0';
    return temp;
}

//TO NIE ZADZIAŁA!- choć nie wyrzuci błędu
//char* foo()
//{
    //char temp[10];
    //temp[0]='w';
    //temp[1]='$';
    //temp[2]='a';
    //temp[3]='\0';
    //return temp;
//}

int main()
{
    printf("%s\n",foo());
    return 0;
}
