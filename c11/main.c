#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pointer to an array of five numbers
    int(*a)[5];
    int b[5] = { 1, 2, 3, 4, 5 };
    int i = 0;

    // Points to the whole array b
    a = &b;

    printf("%d\n", **a);
    for (i = 0; i < 5; i++)
        printf("%d\n", *(*a + i));

    return 0;
}
