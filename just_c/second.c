#include "second.h"

int fane_test(int *p_gl)
{
    int a = p_gl;
    return a*a+gc;
}

int switch_values(char *pnume_1, char *pnume_2)
{
    char *pTemporar = pnume_1;
    pnume_1 = pnume_2;
    pnume_2 = pTemporar;
}
