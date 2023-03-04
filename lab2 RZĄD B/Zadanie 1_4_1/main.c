#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Podaj dwie dodatnie liczby calkowite");
    scanf("%d %d", &n, &m);



    for(int i=n; i < m; i+=n)
    //n mniejsze od m i wybieranie liczb bedacych wielokrotnoscia czyli i = i + n
    {
        printf("%d ", i);
    }
    return 0;
}
