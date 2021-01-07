// program to insert a value in  user entered array at a specified position

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

    printf("Enter the new element and position seperated by spaces  \n");
    scanf("%d%d", &newElem, &position);
    position--; // offsetting the value to use further in program

    if (position > numArrayLen)
    { // input validation
        printf("Invalid input for position ");
        return -1;
    }
    // initializing new array to store changed elements
    int numArrayCopy[numArrayLen + 1];

    for (int i = 0; i < numArrayLen + 1; i++)
    {
        if (i < position)
        {
            numArrayCopy[i] = numArray[i];
        }
        else if (i == position)
        {
            numArrayCopy[i] = newElem;
        }
        else
        {
            numArrayCopy[i] = numArray[i - 1];
        }
        printf("%d ", numArrayCopy[i]);
    }

    return 0;
}
