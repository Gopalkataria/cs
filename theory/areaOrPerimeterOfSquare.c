

// program to find area or perimeter of a square depending on user choice
// date : 24 December 2020

#include <stdio.h>

int main()
{
    int sideLen, answer, choice;

    printf("Enter the side length of the square ");
    scanf("%d", &sideLen);

    printf("Enter your choice \n  1  Perimeter of the square \n  2  Area of the square \n Your choice :  ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        answer = 4 * sideLen;
        printf(" The perimeter is %d", answer);
        break;
    case 2:
        answer = sideLen * sideLen;
        printf(" The area is %d", answer);
        break;

    default:
        printf("invalid input ");
        break;
    }
    return 0;
}