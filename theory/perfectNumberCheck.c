// Program to check whether an entered number is an perfect number or not
// date : 24 December 2020

#include <stdio.h>

int main()
{

    int number, divisor, sumDivisors = 0;
    printf(" Enter the number ");
    scanf("%d", &number);

    for (divisor = 1; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            sumDivisors += divisor;
        }
    }

    printf("%d is%s a perfect number ", number, (sumDivisors == number ? "" : " not"));
    return 0;
}