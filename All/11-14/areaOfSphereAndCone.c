

// Program to  find curved surface area of sphere or cone as per user's choice
// date : 7 december 2020

#include <stdio.h>
#include <math.h>

int main()
{

    // variable declarations
    int choice;
    float radius, area, height;

    // taking input7
    printf("Enter the choice  \n Surface area of Sphere : 1 \n Surface area of Cone : 2 \n      \n Your choice ");
    scanf("%d", &choice);

    // logic
    switch (choice)
    {
    case 1:

        // taking input

        printf("Enter the radius of the sphere ");
        scanf("%f", &radius);

        // logic
        area = (4 * 3.14 * radius * radius);

        // printing output
        printf(" The Surface area is %f ", area);
        break;

    case 2:

        // taking input

        printf("Enter the radius and height of the cone ");
        scanf("%f%f", &radius, &height);

        // logic
        area = (3.14 * radius * (radius + (sqrt((height * height) + (radius * radius)))));

        // printing output
        printf(" The surface area is %f ", area);
        break;

    default:
        printf("invalid input");
        break;
    }
    printf("\n");

    return 0;
}