// This file is covered by the LICENSE file in the root of this repository

// Program to check whether the entered number is a palindrome number or not
// date : 23 december 2020

#include <stdio.h>

int main()
{

    int number, reversedNumber, temp, digit;

    printf("Enter the number ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0)
    {
        digit = temp % 10;
        temp = (temp - digit) / 10;
        reversedNumber *= 10;
        reversedNumber += digit;
    }

    printf(" %d is%sa palindrome number \n ", number, (number == reversedNumber ? " " : " not "));
    return 0;
}