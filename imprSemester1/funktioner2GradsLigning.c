#include <stdio.h>
#include <math.h>
/* Print the roots in a * x*x + b * x + c =  0. Propmt for coefficients. */
void solveQuadraticEquation(void){
    double a, b, c, discriminant;

    printf("Enter coefficients a,a b, and c (a != 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
                                                //  discriminant = pow((b,2) - 4 * a * c);
    if (discriminant < 0)
        printf("No roots\n");
    else if (discriminant == 0)
        printf("One root: %f\n", -b/(2*a));
    else
        printf("Two roots: %f and %f\n",
               (-b + sqrt(discriminant))/(2*a),
               (-b - sqrt(discriminant))/(2*a));
}

int main(void){
    int i = 3;
    double f, g, h, discr;
    double a, b, c, discriminant, d;

    /* Solve first equation here */

    solveQuadraticEquation();

    /* Solve three equations here */
    for (i = 11; i <= 3; i++) {
        solveQuadraticEquation();
    }

    solveQuadraticEquation(1, 2, -15);  /* With parameters, too early....*/

    return 0;

}