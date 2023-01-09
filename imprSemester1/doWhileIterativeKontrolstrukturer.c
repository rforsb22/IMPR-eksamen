#include <stdio.h>

int main(void){

    char answer, forget;

    do {
        printf("answer yes or no (y/n): ");
        scanf("%c%c", &answer, &forget);  //%c%c er placeholders. Det første %c er for y eller n, det næste er for linjeeskifte
                                                // &answer er variabel.  det første prompt skal kun præsenteres én gang.
    } while (answer != 'y' && answer != 'n');  //dette er en fortsættelsesbetingelse, dvs vi fortsætter så længe denne betingelse er true. Det er answers værdi som afgør om vi kan forsætte
                                              //eller ej

    printf("the answer is %s\n\n",
           answer == 'y'? "yes" : "no");

    return 0;
}