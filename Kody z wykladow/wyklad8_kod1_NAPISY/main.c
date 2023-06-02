#include <stdio.h>
#include <stdlib.h>

//KOPIOWANIE NAPISU

int main()
{
    char * napis = "ab6sWR";
    char * kopia;
    kopia=napis;
    //wystarczająca konstrukcja

    printf("%s\n",napis);
    //%s- napis, drukowanie dopóki nie trafimy na znak ostatni \0
    printf("%p\n",napis);
    //adres napisu- zazwyczaj niski (bo siedzi w pamięci stałej)
    printf("%p\n",&napis);
    //adres wskaźnika (taki adres adresu)

    printf("%s\n",kopia);
    printf("%p\n",kopia);
    //dla kopii adres napisu drukuje sie analogicznie

    printf("%p\n",&kopia);
    //dla kopii adres adresu jest różny (choć bliski- tu różni się o 8 bajtów)
    //co ciekawe adres adresu napisu jest wyższy niż adres adresu kopii
    //wiąże się to z inną kolejnością zczytywania zmiennych

    printf("%s\n",kopia+10);
    //zła praktyka- przeskakujemy o jedną komórkę w prawo (jeden bajt)
    //zwraca b na początku
    //gdybyśmy dodali większą sume, wywołanie sie sypie (ucinanie napisu, komunikaty błędu (wychodzimy poza zakres),...)


    return 0;
}
