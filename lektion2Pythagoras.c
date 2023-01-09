#include <stdio.h>


int main(void){
    int m, n;

    printf("enter two positive integers m > n: ");
    scanf("%d %d", &m, &n);

    int side1 = m * m - n * n;
    int side2 = 2 * m * n;
    int hypotenusen  = m * m + n * n;

    printf("side1 = %d\n side2 = %d\n hypotenusen = %d\n", side1, side2, hypotenusen);

    return 0;
}