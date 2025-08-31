#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    long n = strtol(argv[1], NULL, 10); // convert first argument to long
    printf("You entered: %ld\n", n);

    printf("Counting 1..n:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Counting Reverse:\n");
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Counting Evens.. \n");
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    i = n;

    printf("Counting Reverse. \n");
    do
    {
        printf("%d ", i);
        i--;
    } while (i >= 1);

    return 0;
}
