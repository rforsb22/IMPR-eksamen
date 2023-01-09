#include <stdio.h>
#define DELTA 0.05
#include <math.h>


int main(void){
    double x, y, r, distance;

    printf("Enter radius r of a circle and two coordinates (x,y): \n");
    scanf("%lf %lf %lf", &r, &x, &y);


    distance = sqrt(pow(x,2) + pow(y, 2));

        if (distance == r+DELTA || distance == r-DELTA){
            printf("hit circle");
        }
        else if (distance < r){
            printf("inside circle");
        }
        else if (distance > r){
                    printf("outside circle");
            }

    return 0;
}