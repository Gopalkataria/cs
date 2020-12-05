// This file is covered by the LICENSE file in the root of this repository

// Program to  find su of even numbers until n
// date : 4 december 2020

#include <stdio.h>

int main()
{

    // variable declarations
    int choice;
    float radius, volume, height;

    // taking input7
    printf("Enter the choice  \n Volume of Sphere : 1 \n Volume of Cone : 2 \n      \n Your choice ");
    scanf("%d", &choice);

    // logic
    switch (choice)
    {
    case 1:

        // taking input

        printf("Enter the radius of the sphere ");
        scanf("%f", &radius);

        // logic
        volume = (4 * 3.14 * radius * radius * radius) / 3;

        // printing output
        printf(" The volume is %f ", volume);
        break;

    case 2:

        // taking input

        printf("Enter the radius and height of the cone ");
        scanf("%f%f", &radius, &height);

        // logic
        volume = (3.14 * radius * radius * height) / 3;

        // printing output
        printf(" The volume is %f ", volume);
        break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}