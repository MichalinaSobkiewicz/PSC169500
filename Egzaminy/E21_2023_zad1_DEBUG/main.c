#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[25] = "CzerwiecCzerwiec";
    int a = napis[5]; //a=105
    char z = napis[3]; //a=105   , z='r'
    int b = a^2; // a=105   , b='r'  , z='r'
    z++;  // a=105   , b=107  , z='s'
    z= (a-=2); // a=103   , b=107  , z='g'
    b -= a+2; // a=103   , b=2  , z='g'
    z--; // a=103   , b=2  , z='f'
    a = (b-=2); // a=0   , b=0  , z='f'
    return 0;
}
