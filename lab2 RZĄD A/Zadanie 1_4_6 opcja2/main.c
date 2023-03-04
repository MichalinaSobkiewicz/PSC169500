#include <stdio.h>
#include <stdlib.h>

//nie jestem pewna co do tresci zadania
//nie wiem ktora z podanych opcji bedzie poprawna

//DRUGI TOK ROZUMOWANIA
//kiedy przy mnozeniu liczb nieparzystych ostatnim mnożnikiem jest ostatnia liczba parzysta przed n

int main()
{
    int n;
    printf("Podaj liczbe calkowita wieksza od 2: ");
    scanf("%d", &n);

    int iloczyn = 1;

 if (n % 2 == 0)
{

    for (int i = 2; i <= n; i += 2)
    {
        iloczyn *= i;
    }
}

if (n % 2 == 1)
{
    for (int i=2; i<n; i+=2)

    {
        iloczyn *= i;

    }

}

    printf("Iloczyn liczb parzystych z zakresu od 2 do %d to: %d\n", n, iloczyn);

    return 0;
}
