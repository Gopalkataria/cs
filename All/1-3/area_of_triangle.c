// Program to  find area of a triangle
// date : 2nd oct friday

#include <stdio.h>

int main()
{

    // variable declarations
    int height, base;
    float area;

    // taking input
    printf("Enter the base ");
    scanf("%d", &base);
    printf("Enter the height ");
    scanf("%d", &height);

    // logic
    area = base * height / 2;

    // printing output
    printf(" The area is %f square units", area);
    return 0;
}