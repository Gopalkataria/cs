// program to find sum of elements of an array at odd and even places

// date : 30 December 2020

#include <stdio.h>

int main()
{
    int n = 5, listA[] = {2, 5, 6, 7, 8},
        productOfOddPlaces = 1, sumOfEvenPlaces = 0, currentElement = 0;

    printf("The elements are ");
    // printing the original array and
    // finding sum of all elements at even places and
    // product of odd  elements in a single loop
    for (int i = 0; i < n; ++i)
    {
        currentElement = listA[i];

        // if the index is even adding values to sum of even elements
        if (i % 2 == 0)
            sumOfEvenPlaces += currentElement;

        // if the index is odd multiplying values to product of odd elements
        else
            productOfOddPlaces *= currentElement;

        // printing the current element
        printf("%d ", currentElement);
    }

    printf(" \n product of elements at odd places is  %d \n sum of elements at even places is %d ", productOfOddPlaces, sumOfEvenPlaces);

    return 0;
}