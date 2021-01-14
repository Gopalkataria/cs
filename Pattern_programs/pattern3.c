 

// Pattern program
// date : 11 December 2020

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

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
        for (b = 1; b <= a; b++)
        {
            printf("%d ", b);
        }
        printf("\n");
    }

    return 0;
}