#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int x = 42;
    printf("The value of x is: %d \n", x);
    printf("The memory adress of x is: %p \n", &x);
    int *p = &x;
    printf("The p is: %p \n", p);
    printf("The *p is: %d \n", *p);

    *p = 100;
    printf("The value of x is: %d \n", x);
    printf("The *p is: %d \n", *p);

    x = 200;
    printf("The value of x is: %d \n", x);
    printf("The *p is: %d \n", *p);

    return 0;
}