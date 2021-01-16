// Program to find transpose of a matrix and check if it is a symmetric matrix
// date : 14 jan 2021

#include <stdio.h>

int main()
{
    int rowSize, colSize;

    printf(" Enter the row and column size of the matrix  ");
    scanf("%d%d", &rowSize, &colSize); // taking input for the row and column size

    int matrix[rowSize][colSize], transposedMatrix[colSize][rowSize], row, col, rowSum, colSum;

    // taking input for the matrix elements
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrix[row][col]);

            // adding elements to new transposed matrix right away in a transposed manner
            // by transposing, rows become cols and cols become rows
            // so adjusting elements accordingly
            transposedMatrix[col][row] = matrix[row][col];
        }
    }

    // printing elements of transposed matrix
    printf("\n\n Transposed Matrix \n");
    for (row = 0; row < colSize; row++) // rows traverse according to col size, since its transposed
    {
        for (col = 0; col < rowSize; col++) // cols traverse according to row size, since its transposed
        {
            printf("%d ", transposedMatrix[row][col]);
        }
        printf("\n");
    }

    int isSymmetricMatrix = 1;

    for (row = 0; row < rowSize; row++)
    {
        if (!isSymmetricMatrix)
            break;
        for (col = 0; col < colSize; col++)
        {
            if (matrix[row][col] != transposedMatrix[row][col])
            {
                isSymmetricMatrix = 0;
                break;
            }
        }
    }

    printf("\n The Matrix is%s symmetric", (isSymmetricMatrix ? "" : " not"));

    return 0;
}