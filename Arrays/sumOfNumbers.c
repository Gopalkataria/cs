// program to find sum of entered numbers

// date : 29 December 2020

#include <stdio.h>

int main()
{

    int sumOfValues = 0, n;
    printf("How many values are you going to enter : ");
    scanf("%d", &n);
    int values[n];

    printf("Enter integers: ");

    // taking input and storing it in an array
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &values[i]);
    }

    // using the loop to store the values in sumOfValues Variable
    for (int i = 0; i < n; i++)
    {
        sumOfValues += values[i];
    }

    printf("%d", sumOfValues);
    return 0;
}