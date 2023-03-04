#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Wpisz pierwsza liczbe calkowita n i druga liczbe calkowita m gdzie n<m: ");
    scanf("%d %d", &n, &m);
    //n jest mniejsze od m

    int iloczyn = 1;
    //przy mnozeniu kolejnych wyrazow mnozenie przez 1 nie zmieni wyniku
    for(int i=n; i<=m; i++)
    {
        iloczyn *= i;
    }

    printf("Iloczyn z liczb od n do m to: %d", iloczyn);
}
