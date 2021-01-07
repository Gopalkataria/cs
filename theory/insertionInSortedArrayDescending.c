// program to insert a value in  user entered sorted array ( descending order )

// date : 4nd January 2021

#include <stdio.h>

int main()
{

    printf("how many digits you want to enter ");
    int numberOfElements, i, newElement;
    scanf("%d", &numberOfElements);

    // initializing the array
    int numArray[numberOfElements + 1];

    // taking input for array elements
    printf("Enter the digits in descending order ");
    for (i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &numArray[i]);
    }

    // taking input for new element
    printf(" Enter the new element ");
    scanf("%d", &newElement);

    i = numberOfElements - 1;
    // looping in reverse manner array
    // constantly checking whether current element is lower than new element or not
    while (numArray[i] < newElement && i >= 0)
    {
        // shifting elements to the next index to make space for incoming element
        numArray[i + 1] = numArray[i];
        i--;
    }

    // adding the element in its righteous place
    numArray[i + 1] = newElement;

    for (i = 0; i < numberOfElements + 1; i++)
    {
        printf("%d ", numArray[i]);
    }

    return 0;
}