#include <stdio.h>
#define TABLE_SIZE 10
int main(void)
{
    /* Declaration and initialization with pointer to a double*/
    double table a[TABLE_SIZE], b[TABLE_SIZE];
    double *pb;
    int i;

    /* Initialization of a*/
    for (i = 0; i < TABLE_SIZE; i++)
        a[i] = 2*i;

    /* Attempting to copy a into b */
    pb = a;

    for (i = 0; i < TABLE_SIZE ; i++)
        printf("b[%2d]: %f\n ", i, pb[i]);

    return 0;
}

