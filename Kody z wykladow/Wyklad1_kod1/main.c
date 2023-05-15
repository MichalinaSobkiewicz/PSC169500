#include <stdio.h>
#include <stdlib.h>

//Krzaczkowski 1.4.11
//Napisz program, który wczytuje ze standardowego wejścia liczby a, b, c, d i:
//a) wypisuje na standardowe wyjście najmniejszą nieujemną liczbę
//całkowitą x taką, że |a| * x2 + b * x + c > d.
int main()
{
    float a,b,c,d;
    printf("Podaj a: ");
    scanf("%f", &a);
     printf("Podaj b: ");
    scanf("%f", &b);
     printf("Podaj c: ");
    scanf("%f", &c);
     printf("Podaj d: ");
    scanf("%f", &d);

    if(a<0)
        a *= -1;
    if (c>d)
        printf("0\n");
    else
    {
        int temp=0;
        for(int i = 1; a*i*i+b*i+c<=d;i++)
        {
            temp=i;
        }
        printf("%d\n",temp+1);
    }
}
