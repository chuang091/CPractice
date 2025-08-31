#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void swap_good(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int a = 24;
    int b = 42;

    swap_good(&a, &b); // NOTE: passing addresses
    printf("Now a = %d, b = %d\n", a, b);
}