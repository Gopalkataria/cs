// program to find volume of a sphere

#include <stdio.h>

int main()
{

    // variable declarations
    float radius, volume;

    // taking input
    printf("Enter the radius of the sphere ");
    scanf("%f", &radius);

    // logic
    volume = (4 * 3.14 * radius * radius * radius) / 3;

    // printing output
    printf(" The ans is %f ", volume);
    return 0;
}