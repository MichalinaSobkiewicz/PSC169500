#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1, liczba2, liczba3;
    int najwieksza;
    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &liczba1, &liczba2, &liczba3);

    najwieksza = liczba1;
    //Zakladamy ze tak jest, aby latwiej bylo porownywac liczby
    //dodatkowo kiedy liczby sa sobie rowne jako wartosc najwieksza przechowywana jest ta sama wartosc

    if (liczba2>najwieksza)
    {
        najwieksza= liczba2;
    }

    if(liczba3>najwieksza)
    {
        najwieksza=liczba3;
    }

    printf("Najwieksza z podanych liczb to %d", najwieksza);
    return 0;

}
