#include <stdio.h>

int main(void)
{
    int i;
    int j;
    for (int i = 0; i < 6; ++i)
    {
        printf("%d",i);
        for (int j = 6; j > 0 ; --j){
            if(j <= i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
* for (int j = 6; j > 0 ; --j){
            if(i >= j)      uligheden  i og j
 0******
 1*****
 2****
 3***
 4**
 5*

  hvis i>6  kommer der fejl i hele koden
 *
 * for (int j = 6; j > 0 ; --j){
            if(j >= i)  uligheden  j og i
0
1
2*
3**
4***
5****
 *
 *
 * for (int j = 6; j > 0 ; --j){
            if(i <= j)   uligheden  j og i
 *
0
1
2*
3**
4***
5****
 *
 *
 *  for (int j = 6; j > 0 ; --j){
            if(j <= i)    uligheden j og i
                printf("*");    "*"
            else
                printf(" ");    " "

0
1     *
2    **
3   ***
4  ****
5 *****

    printf("%d",i);
        for (int j = 6; j > 0 ; --j){
            if(j >= i)        uligheden j og i
                printf("*");    "*"
            else
                printf(" ");    " "
0******
1******
2*****
3****
4***
5**

 for (int j = 6; j > 0 ; --j){
            if(j <= i)
                printf("*");    *
            else
                printf("*");    *
0******
1******
2******
3******
4******
5******

 for (int j = 6; j > 0 ; --j){
            if(j <= i)
                printf("* ");    *
            else
                printf("* ");    *

printf("%d",i);
        for (int j = 6; j > 0 ; --j){
            if(j >= i)
                printf("* ");
            else
                printf("* ");

0* * * * * *
1* * * * * *
2* * * * * *
3* * * * * *
4* * * * * *
5* * * * * *

 printf("%d",i);
        for (int j = 6; j > 0 ; --j){
            if(j <= i)
                printf(" *");
            else
                printf(" ");

0
1      *
2     * *
3    * * *
4   * * * *
5  * * * * *


 */