#include <stdio.h>
#include <stdlib.h>

int main()
{
    double liczba;
    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", & liczba);
    printf("Ta liczba z dokladnoscia do dwoch miejsc po przecinku to: %.2lf\n", liczba);
    return 0;
}
