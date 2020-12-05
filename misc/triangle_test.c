// This file is covered by the LICENSE file in the root of this repository

// Program to  find the type of the triangle

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, c;

    // taking input
    printf("Enter the sides of the triangle ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b < c || b + c < a || a + c < b || a <= 0 || b <= 0 || a <= 0)
    {
        printf("invalid input ");
        return 0;
    }

    if (a == b && a == c && b == c)
    {
        printf("its an equilateral triangle");
    }
    else if (a == b || a == c || b == c)
    {
        printf("its an isosceles  triangle");
    }
    else
    {
        printf("its an scalene triangle");
    }

    return 0;
}