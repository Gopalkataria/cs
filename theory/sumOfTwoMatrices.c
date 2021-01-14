// This file is covered by the LICENSE file in the root of this repository

// Program to find sum of two matrices
// date : 13 jan 2021

#include <stdio.h>

int main()
{

    int rowSize, colSize, row, col;
    printf(" Enter the row and column size of the matrices ");
    scanf("%d%d", &rowSize, &colSize);

    int matrixA[rowSize][colSize], matrixB[rowSize][colSize], sumMatrixAB[rowSize][colSize];

    printf("Enter elements of Matrix A\n");
    for (int row = 0; row < rowSize; row++)
    {
        printf("Row %d : ", row + 1);
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrixA[row][col]); /// taking input for elemets of matrix A
        }
    }

    printf("Enter elements of Matrix B \n");
    for (row = 0; row < rowSize; row++)
    {
        printf("Row %d : ", row + 1);
        for (col = 0; col < colSize; col++)
        {
            scanf("%d", &matrixB[row][col]);                               // taking input for elements of matrix B
            sumMatrixAB[row][col] = matrixB[row][col] + matrixA[row][col]; // adding the elements right away
        }
    }

    // printing elements of matrix A
    printf("\n\nMatrix A\n");
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            printf("%d ", matrixA[row][col]);
        }
        printf("\n");
    }

    // printing elements of matrix B
    printf("\n\nMatrix B\n");
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            printf("%d ", matrixB[row][col]);
        }
        printf("\n");
    }

    // printing elements of matrix A + B
    printf("\n\nMatrix A + Matrix B\n");
    for (row = 0; row < rowSize; row++)
    {
        for (col = 0; col < colSize; col++)
        {
            printf("%d ", sumMatrixAB[row][col]);
        }
        printf("\n");
    }

    return 0;
}