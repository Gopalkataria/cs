// Program to find transpose of a matrix and check if it is a symmetric matrix
// date : 14 jan 2021

#include <stdio.h>

int main()
{
    int rowSize, colSize;

    printf(" Enter the row and column size of the matrix  ");
    scanf("%d%d", &rowSize, &colSize); // taking input for the row and column size

    int matrix[rowSize][colSize], row, col;

    // taking input for the matrix elements
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("\nUpper triangle\n");
    for (row = 0; row < rowSize; row++)
    {
        printf("\n");
        for (col = 0; col < colSize; col++)
        {
            if (col <= row)
                printf("  ");
            else
                printf("%d ", matrix[row][col]);
        }
    }
    printf("\nLower triangle\n");
    for (row = 0; row < rowSize; row++)
    {
        printf("\n");
        for (col = 0; col < colSize; col++)
        {
            if (col >= row)
                printf("  ");
            else
                printf("%d ", matrix[row][col]);
        }
    }

    return 0;
}