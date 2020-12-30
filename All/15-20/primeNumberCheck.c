// This file is covered by the LICENSE file in the root of this repository

// Program to check whether the entered number is a prime number or not
// date : 23 december 2020

#include <stdio.h>

int main(void)
{
    int n, isPrime = 1, fact;

    printf("enter the no. ");
    scanf("%d", &n);

    for (fact = 2; fact < (n / 2); fact++)
    {
        if (n % fact == 0)
        {
            isPrime = 0;
            break;
        }
    }
    printf(" %d is%s a prime number ", n, (isPrime ? "" : " not"));
    return 0;
}
