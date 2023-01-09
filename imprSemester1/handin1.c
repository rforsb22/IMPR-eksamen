/**
 * brug af heltals division og modulus rest værdi.
 *
*/

#include <stdio.h>

int main(void){
    int seconds, weeks, days, hours, minutes;

    printf("Enter time in seconds: ");
    scanf("%d",&seconds);

    weeks = seconds / 604800;
    seconds = seconds % 604800;
    days = seconds / 86400;
    seconds = seconds % 86400;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("This amounts to %d weeks, %d days, %d hours, %d minutes and %d seconds: ", weeks, days, hours, minutes, seconds);

    return 0;
}