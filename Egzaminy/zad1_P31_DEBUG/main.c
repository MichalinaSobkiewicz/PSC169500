#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[3][4] = {{1,2,3,4},{4,5,6,7},{3,3,3}};
  int a=tab[1][-3]; //a=2
  int b=tab[2][-2]; //a=2  ,b=B
  a=b++; //a=6  ,b=7
  b=a*2;  //a=6  ,b=12
  a=(b+=3)-7;  //a=8  ,b=15
  b=**((tab)+2); //a=8  ,b=3
  ++a; //a=9  ,b=3
  return 0;
}
