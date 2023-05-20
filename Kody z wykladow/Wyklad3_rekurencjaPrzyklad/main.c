#include <stdio.h>
#include <stdlib.h>

//DLA REKURENCJI ZRÓB TABELKE WARTOSCI!
//a_0 = a_1 = 1
//a_(3n) =  a_n dla n>0
//a_(3n+1) =  a_(3n) - 1 dla n>0
//a_(3n+2) =  a_(4n) + 1 dla n=>0

int foo(int n)
{
    if(n==0 || n==1)
        return 1;

    if(n%3==0)
        return foo(n/3);

    if(n%3==1)
        return foo(n-1)-1;

    return foo(n-1)+1;
}
int main()
{
    printf("%d\n", foo(2));
}
