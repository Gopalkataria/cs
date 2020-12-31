// program to find the largest and smallest number in an array

// date : 31st December 2020

#include <stdio.h>

int main()
{
    int numArrayLen, largestInt, smallestInt, currentElement;

    // taking input for array length
    printf(" Enter the number of integers you want to enter : ");
    scanf("%d", &numArrayLen);

    // initializing the array
    int numArray[numArrayLen];

    // taking input for all the array elements
    printf("Enter the integers seperated by spaces\n");
    for (int i = 0; i < numArrayLen; i++)
    {
        scanf("%d", &numArray[i]);
    }

    // assuming first element to be largest and smallest
    smallestInt = largestInt = numArray[0];

    for (int j = 0; j < numArrayLen; j++)
    {
        currentElement = numArray[j];
        // if current element is smaller than
        //  smallest assign the value of currentElement to smallestInt
        if (smallestInt > currentElement)
            smallestInt = currentElement;

        // if current element is larger than
        //  largest assign the value of currentElement to largestInt
        if (largestInt < currentElement)
            largestInt = currentElement;
    }

    printf("  largest  is %d \n smallest is %d", largestInt, smallestInt);

    return 0;
}