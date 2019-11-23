#include <stdio.h>
#include <stdlib.h>

typedef struct {
    union {
        int biologie;
        int fizica;
    } note;
    int age;
    char *name;
} elev;

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

int main()
{
    int array[10] = {10,15,6,90,43,4,54,23,21,111};
    // qsort
    qsort( array, 10 , sizeof( int ), int_sorter );
    tipareste( array );

    elev *pCatalog;
    pCatalog = malloc(sizeof(elev));
    pCatalog->name = malloc(10*sizeof(char));

    for (int i=0; i<2; i++) {
        scanf("%d %d", &pCatalog->age, &pCatalog->note.fizica);
        scanf("%s", pCatalog->name);
    }

    printf("Student %s %d %d\n", pCatalog->name, pCatalog->age, pCatalog->note.biologie);
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &num[i][j]);
    // passing multi-dimensional array to a function
    displayNumbers(num);

    return 0;
}
