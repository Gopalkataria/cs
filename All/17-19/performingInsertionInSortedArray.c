// program to insert a value in  user entered sorted array ( ascending order )

// date : 4nd January 2021

#include <stdio.h>

int main()
{
    int numArrayLen, newElem, currentElement, i;

    // taking input for array length
    printf(" Enter the number of integers you want to enter : ");
    scanf("%d", &numArrayLen);

    // initializing the array with 1 extra element to adjust for the new incoming element
    int numArray[numArrayLen + 1];

    // taking input for all the array elements
    printf("Enter the integers seperated by spaces in ascending order \n");
    for (i = 0; i < numArrayLen; i++)
    {
        scanf("%d", &numArray[i]);
    }

    printf("Enter the new element to be added  \n");
    scanf("%d", &newElem);
    printf("%d \n", newElem);

    numArray[numArrayLen] = newElem;

    // sorting the array
    for (int i = 0; i < numArrayLen + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (numArray[i] < numArray[j])
            {
                int temp = numArray[i];
                numArray[i] = numArray[j];
                numArray[j] = temp;
            }
        }
    }

    // printing the array
    for (int i = 0; i < numArrayLen + 1; i++)
    {
        printf("%d ", numArray[i]);
    }

    return 0;
}
