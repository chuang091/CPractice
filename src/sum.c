#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <number1> <number2> ...\n", argv[0]);
        return 1; // no arguments
    }

    long sum = 0;

    for (int i = 1; i < argc; i++)
    {
        char *end;
        errno = 0; // reset before call
        long val = strtol(argv[i], &end, 10);

        if (errno != 0 || *end != '\0')
        {
            fprintf(stderr, "Invalid number: %s\n", argv[i]);
            return 2; // invalid input
        }

        sum += val;
    }

    printf("Sum = %ld\n", sum);
    return 0; // success
}
