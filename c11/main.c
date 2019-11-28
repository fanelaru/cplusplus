#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    // array of pointers to a character
    // to store a list of strings
    char* names[] = {
        "amit",
        "amar",
        "ankit",
        "akhil"
    };

    // Pointer to an array of five numbers
    int(*a)[5];
    int b[5] = { 1, 2, 3, 4, 5 };

    // Points to the whole array b
    a = &b;

    printf("%d\n", **a);

    for (int i = 0; i < 5; i++)
        printf("%d\n", *(*a + i));

    // creating an array
    int arr[] = { 1, 2, 3 };

    // we can make an integer pointer array to
    // store the address of array elements
    int *ptr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        // assigning the address of integer.
        ptr[i] = &arr[i];
    }
    // printing values using pointer
    for (int i = 0; i < SIZE; i++) {
        printf("Value of arr[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}
