// program to find whether year is leap or not

#include <stdio.h>

int main()
{

    // variable declarations
    int year;

    // taking input
    printf("Enter the year ");
    scanf("%d", &year);

    if (year % 4)
        printf("\nIt's not a leap year\n");
    else
        printf("\nIt's a leap year\n");
    return 0;
}