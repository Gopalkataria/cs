// This file is covered by the LICENSE file in the root of this repository

// Program to  find first n prime numbers
// date : 7 december 2020

#include <stdio.h>

int main(void)
{
    int num = 1, n, count, isPrime, fact, nPrimesFound = 0;

    printf("enter the no. ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("\n 2");
    }
    else
    {
        printf(" \n invalid input ");
        return -1;
    }

    count = 1;

    for (num = 3; count < n; num += 2)
    {
        isPrime = 1;
        for (fact = 2; fact < (num / 2); ++fact)
        {
            if (num % fact == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf(", %d", num);
            ++count;
        }
    }

    printf("\n");

    return 0;
}