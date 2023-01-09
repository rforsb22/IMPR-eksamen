#include <stdio.h>

int main(void){

    double yl, yw, hl, hw;

    printf("Enter yard width and length: ");
    scanf("%lf %lf", &yl, &yw);

    double yard_area = yl * yw;
    printf("Yard area is %lf square meters: \n", yard_area);


    printf("Enter house width and length: ");
    scanf("%lf %lf", &hl, &hw);

    double house_area = hl * hw;
    printf("House area is %lf square meters\n", house_area);

    double sizeOfYard = yard_area - house_area;
    printf("Size of yard is %lf\n\n", yard_area - house_area);

    double timeToCutYard = (sizeOfYard / 0.2) / 60;
    printf("The time it takes to cut the yard is %.2lf minutes.\n", timeToCutYard);

    return 0;
}