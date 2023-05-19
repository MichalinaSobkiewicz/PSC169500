#include <stdio.h>
#include <stdlib.h>

double compare_pointed_numbers(const float *num1, float *const num2)
{
    if(*num1==*num2)
    {
        return 0;
    }
    if(*num1>*num2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    double num1= 22.123;
    double num2= 28.142;
    int wynik= compare_pointed_numbers(&num1, &num2);
    printf("Wynik: %d", wynik);
    return 0;
}
