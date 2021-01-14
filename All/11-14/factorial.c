// Program to  find factorial using for loop
// date : 4 december 2020

#include <stdio.h>

int main()
{

    // variable declarations
    int n, factorial = 1;

    // taking input
    printf("Enter the value for n ");
    scanf("%d", &n);

    // logic
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    // printing output
    printf(" The value of %d! is %d ", n, factorial);
    return 0;
}