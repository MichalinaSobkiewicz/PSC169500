#include <stdio.h>

int foo(void)
{
    return 42;
}

void fun(int (*foo)(void), int x)
{
    int result = foo();
    printf("Wynik funkcji foo: %d\n", result);
    printf("Argument x: %d\n", x);
}

int main()
{
    fun(foo, 10);

    return 0;
}
