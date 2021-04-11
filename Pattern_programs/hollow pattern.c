

// Pattern program
// date : 11 December 2020

//  * * * * * *
//  *         *
//  *         *
//  *         *
//  *         *
//  * * * * * *

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        for (b = 1; b <= n; b++)
        {
            if (a == 1 || a == n || b == 1 || b == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}