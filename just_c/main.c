#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const x=3;

    int * const cpI=&x;

    printf("Hello world!\n");
    return 0;
}
