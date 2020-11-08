// program to find roots of a quadratic equation
// date : 15 oct 2020

#include <stdio.h>
#include <math.h>

int main()
{

    // variable declarations
    float a, b, c,
        discriminant = 0, root1 = 0, root2 = 0;

    // taking input
    printf("Enter the values of a, b, c in quadratic equation ");
    scanf("%d%d%d", &a, &b, &c);

    // logic
    discriminant = ((b * b) - (4 * a * c));

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("there are two real roots :  %f and %f ", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = (-b) / (2 * a);
        printf("there are two real and equal roots :  %f and %f ", root1, root1);
    }
    else
    {
        float imaginaryRootPart = (sqrt(-discriminant) / (2 * a));
        root1 = (-b) / (2 * a);
        printf("there are two imaginary roots  :  %f + i %f  and %f - i %f ", root1, imaginaryRootPart, root1, imaginaryRootPart);
    }

    return 0;
}