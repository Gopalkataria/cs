// Program to  find su of even numbers until n
// date : 4 december 2020

#include <stdio.h>

int main()
{

    // variable declarations
    int n, summationEven = 0;

    // taking input7
    printf("Enter the value for n ");
    scanf("%d", &n);

    // logic
    for (int i = 2; i <= n; i += 2)
    {
        summationEven += i;
    }

    // printing output
    printf(" The sum of all even numbers till %d is %d ", n, summationEven);
    return 0;
}