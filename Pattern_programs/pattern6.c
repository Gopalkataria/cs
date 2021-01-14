

// Pattern program
// date : 11 December 2020

// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = n; a > 0; --a)
    {
        for (b = a; b <= n; b++)
        {
            printf("%d ", b);
        }
        printf("\n");
    }

    return 0;
}