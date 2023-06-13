#include <stdio.h>
#include <stdlib.h>


struct Student
{
    char imie[50];
    int ocena;
};

char* najgorszystudent(int n, struct Student tab[n])
{
    int najgorsza_ocena = tab[0].ocena;
    int indeks_najgorszego = 0;

    for (int i = 1; i < n; i++)
    {
        if (tab[i].ocena < najgorsza_ocena)
        {
            najgorsza_ocena = tab[i].ocena;
            indeks_najgorszego = i;
        }
    }

    return tab[indeks_najgorszego].imie;
}

int main()
{
    struct Student student1 = {"Jan Wisniewski
    ", 2};
    struct Student student2 = {"Michal Malinowski", 5};
    struct Student student3 = {"Michalina Sobkiewicz", 3};
    struct Student student4 = {"Karol Sowa", 4};

    struct Student tablica_studentow[4] = {student1, student2, student3, student4};
    int n = 4;
    char* wynik = najgorszystudent(n, tablica_studentow);

    printf("%s\n", wynik);

    return 0;
}

