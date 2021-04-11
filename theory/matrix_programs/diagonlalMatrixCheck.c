// Program to  find whether a matrix is diagonal or not
// date : 7 december 2020

#include <stdio.h>

int main()
{
    int rowSize, colSize;
    printf("Enter the row and column size of the matrix ");
    scanf("%d%d", &rowSize, &colSize);

    if (rowSize != colSize)
    {
        printf(" only square matrices can be diagonal matrices, hence the matrix you are going to enter is not a square matrix ");
        return -1;
    }

    int matrix[rowSize][colSize], row, col, isDiagonal = 1;
    printf("Enter the elements of the matrix \n ");
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            if (row != col && matrix[row][col] != 0)
                isDiagonal = 0;
        }
    }

    if (isDiagonal)
    {
        printf("matrix is diagonal ");
    }
    else
    {
        printf("matrix is not diagonal ");
    }

    return 0;
}