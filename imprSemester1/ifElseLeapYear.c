#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int month, numberOfDays, leapYear;

    printf("Enter a month between 1 and 12: ");
    scanf("%d",&month);
    printf("Is it leap year (1) or not (0): ");
    scanf("%d",&leapYear);

/**
 * Need to use a switch for leap year. Start by top down forfinelse - think of days in months , 31, 30 and 29 or 28.
 * Gather the same different months and use a printf to display in the end.
 * Need to make a switch, with 3 different cases. One set of cases for months with 31 days.
 * Second set of cases for months with 30 days.
 * Third set of cases, which will be an if statement for february
 */

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        numberOfDays = 31; break;
        case 4: case 6: case 9: case 11:
            numberOfDays = 30; break;
        case 2:
            if (leapYear)
                numberOfDays = 29;
            else
                numberOfDays = 28;
            break;
        default: exit(-1); /* Stop the program (a should not happen case */
    }

    printf("There are %d days in month %d\n", numberOfDays, month);

    return 0;
}