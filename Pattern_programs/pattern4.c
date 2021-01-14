

// Pattern program
// date : 11 December 2020

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

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
            printf("%d ", n - a);
        }
        printf("\n");
    }

    return 0;
}