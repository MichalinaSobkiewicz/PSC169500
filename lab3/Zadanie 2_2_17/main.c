#include <stdio.h>
#include <stdlib.h>


void count_calls() {
    static int num_calls = 0;
    num_calls++;
    printf("Function has been called %d times.\n", num_calls);
}

int main() {
    count_calls(); // Function has been called 1 times.
    count_calls(); // Function has been called 2 times.
    count_calls(); // Function has been called 3 times.
    return 0;
}
