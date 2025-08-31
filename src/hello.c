#include <stdio.h>
#include <stdlib.h>

/* Goal:
 * - Print argv info
 * - Show basic pointer & heap allocation
 * - Compile with ASan/UBSan to catch errors
 */

int main(int argc, char **argv)
{
    (void)argv;
    printf("Args count: %d\n", argc);

    // Stack variable
    int x = 42;
    printf("x on stack: %d, address=%p\n", x, (void *)&x);

    // Heap allocation
    size_t n = 4;
    int *arr = (int *)malloc(n * sizeof(int)); // allocate on heap
    if (!arr)
    {
        perror("malloc");
        return 1;
    }

    for (size_t i = 0; i < n; i++)
        arr[i] = (int)(i + 1);
    printf("arr[0]=%d arr[1]=%d arr[2]=%d arr[3]=%d\n", arr[0], arr[1], arr[2], arr[3]);

    // Pointer arithmetic demo
    int *p = arr; // p points to arr[0]
    p++;          // now p points to arr[1]
    printf("*p after p++ = %d (should be 2)\n", *p);

    free(arr); // always free heap memory
    return 0;
}
