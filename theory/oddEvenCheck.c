// This file is covered by the LICENSE file in the root of this repository

// program to check whether an entered number id odd or even
// date : 24 December 2020

#include <stdio.h>

int main()
{

    int n;
    printf(" Enter the number ");
    scanf("%d", &n);
    printf("%d is a %s number ", n, (n % 2 ? "odd" : "even"));
    return 0;
}