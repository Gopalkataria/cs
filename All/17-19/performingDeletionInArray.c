// program to delete a value in  user entered array at a specified position

// date : 2nd January 2021

#include <stdio.h>

int main()
{
    int numArrayLen, position, newElem, currentElement;

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

    printf("Enter the position of the element to be deleted   \n");
    scanf("%d", &position);

    if (position > numArrayLen)
    { // input validation to avoid unwanted problems
        printf("Invalid input for position ");
        return -1;
    }

    // initializing a new array with one less element
    int numArrayCopy[numArrayLen - 1];

    // removing the element and printing the array in the same loop
     for (int i = 0; i < numArrayLen - 1; i++)
    {
        // removal logic
        if (i < position)
        {
            numArrayCopy[i] = numArray[i];
        }

        else
        {
            numArrayCopy[i] = numArray[i + 1];
        }

        // printing array
        printf("%d ", numArrayCopy[i]);
    }

    return 0;
}
