#include <stdio.h>
#include <stdlib.h>

//czy mozna sobie nadpisywac rzeczy z const

void foo(const char*napis)
{
    *napis='a';
}
//nie kompiluje sie
//dereferencja nie jest możliwa tak samo jak w tablicach liczbowych

int main()
{
    printf("Hello world!\n");
    return 0;
}
