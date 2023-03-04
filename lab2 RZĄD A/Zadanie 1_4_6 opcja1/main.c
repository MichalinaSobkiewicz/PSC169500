#include <stdio.h>
#include <stdlib.h>

//nie jestem pewna co do tresci zadania
//nie wiem ktora z podanych opcji bedzie poprawna

//PIERWSZY TOK ROZUMOWANIA
//kiedy przy mnozeniu liczb nieparzystych ostatnim mnożnikiem jest liczba n

int main()
{
    int n;
    printf("Podaj liczbe calkowita wieksza od 2: ");
    scanf("%d", &n);

    int iloczyn = 1;
    //1 przy mnozeniu nie zmienia wartosci rownania

//dla liczby parzystej
 if (n % 2 == 0)
{

    for (int i = 2; i <= n; i += 2)
    {
        iloczyn *= i;
    }
}

//dla liczby nieparzystej
if (n % 2 == 1)
{
    for (int i=2; i<n; i+=2)

    {
        iloczyn *= i;

    }
    //po tej petli wynik iloczynu zatrzyma się na ostatniej parzystej liczbie przed n

    iloczyn = iloczyn * n;
    //aby wymnozyc liczbe
}

    printf("Iloczyn liczb parzystych z zakresu od 2 do %d to: %d\n", n, iloczyn);


    return 0;
}
