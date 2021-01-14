
// Program to find sum of rows and columns of a  matrix
// date : 14 January 2021

#include <stdio.h>

int main()
{

    int rowSize, colSize;

    printf(" Enter the row and column size of the matrix  ");
    scanf("%d%d", &rowSize, &colSize); // taking input for the row and column size

    int matrix[rowSize][colSize], row, col, rowSum, colSum;

    // taking input for the matrix elements
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    // finding sum of elements in a row
    for (row = 0; row < rowSize; row++)
    {
        rowSum = 0;
        for (col = 0; col < colSize; col++)
        {
            rowSum += matrix[row][col];
        }
        printf("Sum of row %d is %d \n", 1 + row, rowSum);
    }

    // finding sum of elements in a column
    for (col = 0; col < colSize; col++)
    {
        colSum = 0;
        for (row = 0; row < rowSize; row++)
        {
            colSum += matrix[row][col];
        }
        printf("Sum of col %d is %d \n", 1 + col, colSum);
    }

    return 0;
}