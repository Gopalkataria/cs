// This file is covered by the LICENSE file in the root of this repository

// Pattern program
// date : 11 December 2020

// E E E E E
// D D D D
// C C C
// B B
// A

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;
    char l = 'A';

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = n - 1; a >= 0; --a)
    {
        for (b = 0; b <= a; b++)
        {
            printf("%d ", l + (a % 26));
        }
        printf("\n");
    }

    return 0;
}