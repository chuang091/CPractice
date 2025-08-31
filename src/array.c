#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int arr[3] = {10, 20, 30};

    int *p = arr; // arr is the address of the first element

    printf("The p is %p \n", p);
    printf("The *p is %d \n", *p);
    printf("The arr is %p \n", arr);
    printf("The arr is %d \n", arr[0]);

    // Try to print the first element
    printf("The first element is %d \n", arr[0]);
    printf("The first element is %d \n", *(arr));
    printf("The first element is %d \n", *(p));
    printf("The first element is %d \n", p[0]);

    // Try to print the second element
    printf("The second element is %d \n", arr[1]);
    printf("The second element is %d \n", *(arr + 1));
    printf("The second element is %d \n", *(p + 1));
    printf("The second element is %d \n", p[1]);

    // Try to print the third element
    printf("The third element is %d \n", arr[2]);
    printf("The third element is %d \n", *(arr + 2));
    printf("The third element is %d \n", *(p + 2));
    printf("The third element is %d \n", p[2]);

    printf("&p is %p (type int *)\n", p);
    printf("&p is %p (type int **)\n", (void *)&p);

    for (int *q = arr; q < arr + 3; q++)
    {
        printf("The element is %d \n", *q);
    }

    printf("arr     = %p\n", (void *)arr);
    printf("arr+1   = %p  (jumps by sizeof(int))\n", (void *)(arr + 1));
    printf("&arr    = %p\n", (void *)&arr);
    printf("&arr+1  = %p  (jumps by sizeof arr = 3*sizeof(int))\n", (void *)(&arr + 1));

    return 0;
}