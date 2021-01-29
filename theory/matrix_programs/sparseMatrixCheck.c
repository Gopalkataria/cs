// Program to  find whether a matrix is sparse matrix or not
// date : 7 december 2020

#include <stdio.h>

int main()
{

    int rowSize, colSize;
    printf("Enter the row and column size of the matrix ");
    scanf("%d%d", &rowSize, &colSize);

    int matrix[rowSize][colSize], row, col, zeroElements = 0;
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrix[row][col]);
            if (matrix[row][col] == 0)
                ++zeroElements;
        }
    }

    printf("The entered matrix is%s a sparse matrix", (zeroElements > (rowSize * colSize * 0.5)) ? "" : " not");
    return 0;
}