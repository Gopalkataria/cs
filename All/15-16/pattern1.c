

// Pattern program
// date : 11 December 2020

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= a; b++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}