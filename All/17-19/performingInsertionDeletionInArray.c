// program to insert a value in  user entered array at a specified position

// date : 2nd January 2021

#include <stdio.h>

int main()
{
    int numArrayLen, largestInt, smallestInt, currentElement;

    // taking input for array length
    printf(" Enter the number of integers you want to enter : ");
    scanf("%d", &numArrayLen);

    // initializing the array with 1 extra element to adjust for the new incoming element
    int numArray[numArrayLen + 1];

    // taking input for all the array elements
    printf("Enter the integers seperated by spaces\n");
    for (int i = 0; i < numArrayLen; i++)
    {
        scanf("%d", &numArray[i]);
    }

    printf("  largest  is %d \n smallest is %d", largestInt, smallestInt);

    return 0;
}