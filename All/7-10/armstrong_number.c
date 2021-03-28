// Program to  find whether a number is armstrong number or not
// date : 8 nov 2020

#include <stdio.h>!

int main(void)
{

    int number, numberCopy, digit, sumOfCubes = 0;
    
    printf("enter the number  ");
    scanf("%d", &number);
    numberCopy = number; // making a copy to show original number in end

    do
    {

        // extracting the last digit
        digit = number % 10;

        // adding the digits cube to to the sum
        sumOfCubes += (digit * digit * digit);

        // removing last digit from the number
        number = (number - digit) / 10;
    } while (number > 0);

    printf("The number %d %s an armstrong number  ", numberCopy, (sumOfCubes == numberCopy ? "is" : "is not"));

    return 0;
}