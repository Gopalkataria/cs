

// Pattern program
// date : 11 December 2020

//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = 1; a <= n; ++a)
    {

        for (b = a; b < n; ++b)
        {
            printf("  ");
        }

        for (b = 1; b <= a; ++b)
        {
            printf(" %d", (a % 10));
            /* code */
        }

        printf("\n");
    }

    return 0;
}