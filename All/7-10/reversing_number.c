// program to reverse a number
// date : 8 nov 2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int number, digit, reverseNumber = 0;

    printf("enter the number  ");
    scanf("%d", &number);

    // making the number positive for the logic to work
    number = abs(number);

    do
    {

        // extracting the last digit
        digit = number % 10;

        // adding the digit to the end of reversed number
        reverseNumber *= 10;
        reverseNumber += digit;

        // removing last digit from the number
        number = (number - digit) / 10;
    } while (number > 0);

    printf(" the reversed number is %d \n ", reverseNumber);

    return 0;
}