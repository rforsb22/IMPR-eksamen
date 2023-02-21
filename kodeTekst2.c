#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number;
    int guess =0;
    srand((unsigned) time(0));
    number = rand();

    number =  (1+ (number % 20));
    do{
        printf("input your guess> \n");
        scanf("%d", &guess);
    } while(guess == number);
    printf("youve won!\n");

    return 0;
}

