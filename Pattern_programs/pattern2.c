

// Pattern program
// date : 11 December 2020

// A
// B B
// C C C
// D D D D
// E E E E E

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b, n;
    char l = 'A';

    // taking input
    printf("Enter the no of lines to print  ");
    scanf("%d", &n);

    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= a; b++)
        {
            printf("%c ", l + a);
        }
        printf("\n");
    }

    return 0;
}