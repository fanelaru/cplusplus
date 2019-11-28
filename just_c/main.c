#include <stdio.h>
#include <stdlib.h>
#include "second.h"

typedef struct {
    union {
        int biologie;
        int fizica;
    } note;
    int age;
    char *name;
} elev, *pelev;

int int_sorter( const void *first_arg, const void *second_arg )
{
    int first = *(int*)first_arg;
    int second = *(int*)second_arg;
    if ( first < second )
    {
        return -1;
    }
    else if ( first == second )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int tipareste( int array[] )
{
    for ( int i = 0; i < 10; ++i )
    {
        printf ( "%d\n" ,array[ i ] );
    }
    return 0;
}

int valideaza_pointer( int *por )
{
    printf("portocale initial %d\n", *por);
    static int temp_por;
    temp_por = *por + 250;
    return temp_por;
}

void displayNumbers(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
           printf("%d\n", num[i][j]);
        }
    }
}

int switch_names(char *pnume_1, char *pnume_2)
{
    char *pnume_temporar;
    pnume_temporar = pnume_1;
    pnume_1 = pnume_2;
    pnume_2 = pnume_temporar;
    return 0;
}

void fadd(double a[static 10], const double b[static 10])
{
    int i;
    for (i = 0; i < 10; i++) {
        if (a[i] < 0.0)
        return;
        a[i] += b[i];
    }
    return;
}
int main()
{
    int porto = 100;
    valideaza_pointer(&porto);

    int n = 5;
    int m = 7;
    size_t sz = sizeof(int (*)[n++]);

    printf("portocale %d\n", porto);

    int array[10] = {10,15,6,90,43,4,54,23,21,111};
    // qsort
    qsort( array, 10 , sizeof( int ), int_sorter );
    tipareste( array );

    pelev pCatalog;
    pCatalog = malloc(2*sizeof( elev));
    pCatalog[0].name = malloc(10*sizeof(char));
    pCatalog[1].name = malloc(10*sizeof(char));

    for (int i=0; i<2; i++) {
        scanf("%d %d %s", &pCatalog[i].age, &pCatalog[i].note.fizica, pCatalog[i].name);
        printf("Student %s %d %d\n", pCatalog[i].name, pCatalog[i].age, pCatalog[i].note.biologie);
    }

    printf("Student %s %s\n", pCatalog[0].name, pCatalog[1].name);
    switch_names(pCatalog[0].name, pCatalog[1].name);
    printf("Student %s %s\n", pCatalog[0].name, pCatalog[1].name);

    pCatalog[0].name = pCatalog[1].name;
    printf("Student %s %s\n", pCatalog[0].name, pCatalog[1].name);
    int num[2][2];

    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);
    // passing multi-dimensional array to a function
    displayNumbers(num);

    int d = sizeof((void *)0);
    printf("sizeof este: %d\n", d);
    return 0;
}
