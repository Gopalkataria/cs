// program to sum of digits of a number
// date : 8 nov 2020

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int number, numberCopy, digit, sum = 0;

    printf("enter the number  ");
    scanf("%d", &number);
    numberCopy = number; // making a copy to show original number in end

    // making the number positive for the logic to work
    number = abs(number);

    while (number > 0)
    {

        // extracting the last digit
        digit = number % 10;

        // adding the digit to the sum
        sum += digit;

        // removing last digit from the number
        number = (number - digit) / 10;
    }

    printf(" the sum of digits in %d is %d \n ", numberCopy, sum);

    return 0;
}