#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Podaj wspolczynniki rownania kwadratowego ax^2 + bx + c:\n");
    scanf("%f %f %f", &a, &b, &c);

    double delta = b*b - 4*a*c;

    if(delta < 0)
    {
        printf("Brak rozwiazan rzeczywistych.\n");

    } else if(delta == 0)
    {
        double x = -b / (2*a);
        printf("Rozwiazanie: x = %f\n", x);

    } else {
        double x1 = (-b - sqrt(delta)) / (2*a);
        double x2 = (-b + sqrt(delta)) / (2*a);
        printf("Rozwiazania: x1 = %f, x2 = %f\n", x1, x2);
    }

    return 0;
}
