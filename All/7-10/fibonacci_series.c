// Program to  find n terms of fibonacci series
// date : nov nov 2020

#include <stdio.h>

int main(void)
{

    // n is the number of terms to print
    int n, nextNumber = 1, currentNumber = 0, temp;
    printf("enter the number of fibonacci terms you want to print ");
    scanf("%d", &n);

    // control variable for the while loop
    int i = 0;
    printf("\n");

    while (!(i == n))
    {
        printf(" %d ", currentNumber);

        // below we set currentNumber to nextNumber and
        // increment nextNumber by current number
        temp = nextNumber;
        nextNumber = nextNumber + currentNumber;
        currentNumber = temp;

        i++;
    }

    printf("\n");
    return 0;
}