#include <stdio.h>
#include <stdlib.h>

void odwrocenie(int n, int m, int **tab) {
    for (int j = 1; j < m; j += 2) {
        int start = 0;
        int end = n - 1;

        while (start < end) {
            int temp = tab[start][j];
            tab[start][j] = tab[end][j];
            tab[end][j] = temp;

            start++;
            end--;
        }
    }
}

void wyswietl(int n, int m, int **tab) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("[%d %d] = %d\n", i, j, tab[i][j]);
        }
    }
}

int main() {
    int **tab = malloc(sizeof(int*) * 4);
    for (int i = 0; i < 4; i++) {
        tab[i] = malloc(sizeof(int) * 3);
    }

    tab[0][0] = 2;
    tab[0][1] = 3;
    tab[0][2] = -3;
    tab[1][0] = 1;
    tab[1][1] = 4;
    tab[1][2] = 7;
    tab[2][0] = -3;
    tab[2][1] = -6;
    tab[2][2] = 11;
    tab[3][0] = -2;
    tab[3][1] = 8;
    tab[3][2] = 23;

    wyswietl(4, 3, tab);
    printf("-----------------\n");
    odwrocenie(4, 3, tab);
    wyswietl(4, 3, tab);

    for (int i = 0; i < 4; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}


