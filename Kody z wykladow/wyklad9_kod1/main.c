#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[20];
    int a=5;
    int b=7;
    sprintf(buffer,"%5d+%5d=%5d",a,b,a+b);
    //funkcja sprintf- dodatkowo ma możliwość zapisania ciągu znaków który jest poformatowany
    //5 oznacza że liczba ma być o maksymalnej szerokości 5 (znaczniki- na innym wykładzie)
    //odpal debuger i zobacz co stoi przy buffer
    printf("%s",buffer);
    return 0;
}
