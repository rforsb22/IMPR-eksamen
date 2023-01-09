#include <stdio.h>
#define TABLE_SIZE 6
int main(void){
    /* Declaration and intitialization   slet [TABLE_SIZE] for at printe blokken. */
    double table [TABLE_SIZE]; /*=
            {0.0, 5.0, 8.0, 9.9, 10.2, 8.5}; */
    int i;

    /* Initialization via subscripting - ved at gange et tal med i ændres værdien i tabellen */
    for (i = 0; i < TABLE_SIZE; i++)
        table[i] = (double)(3*i);

    /* Access - printing - ændre table[i] for at printe hele tabellen, ellers specifik plads i array */
    for ( i = 0; i < TABLE_SIZE; i++)
        printf("%.2f\n", table[5]);

    printf("\n");

        return 0;
    }

