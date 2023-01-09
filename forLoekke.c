#include <stdio.h>

/*
 *  version 1  med 1 variabel.
 int main(void){

    int upper, lower, k;

    printf("Enter two intergers, lower and upper: ");
    scanf("%d %d", &lower, &upper);

    for (lower = k; k <= upper; k++)
        printf("k = %d\n", k);

    return 0;

}
*/

  /**
   * en for-løkke i C styre et antal variable som alle bør initialiseres, nogle bør opdateres til  nye værdier i opdateringsudtrykket,
   * og mindst 1 skal bruges i fortsællelsesudtrykket for at afgøre hvornår løkken stoppes
   * k og m starter fra lower og upper, k tælles op og m tælles ned for hvert gennemløb og k <= upper  er et fortsættelsesudtryk
   * for hvor lang tid vi skal køre løkken
   **/

int main(void){

    int lower, upper, k, m;

    printf("enter two integers, lower and upper: ");
    scanf("%d %d", &lower, &upper);

    for (k = lower, m = upper; k <= upper ; k++, m--) {
        printf("k = %3d, m = %3d, k + m = %3d\n", k, m, k + m);




    }
    return 0;
}