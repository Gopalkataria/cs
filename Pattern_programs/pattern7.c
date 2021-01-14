

// Pattern program
// date : 11 December 2020

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = n - 1; a >= 0; --a)
    {
        for (b = 0; b <= a; b++)
        {
            printf("%d ", n - a);
        }
        printf("\n");
    }

    return 0;
}