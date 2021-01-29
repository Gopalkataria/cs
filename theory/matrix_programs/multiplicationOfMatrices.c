// Program to find sum of two matrices
// date : 13 jan 2021

#include <stdio.h>

int main()
{
    int rowSizeA, colSizeA, rowSizeB, colSizeB, row, col;

    // taking input for Matrix A
    printf(" Enter the row and column size of the matrix A ");
    scanf("%d%d", &rowSizeA, &colSizeA);
    int matrixA[rowSizeA][colSizeA];
    printf("Enter elements of Matrix A\n");
    for (int row = 0; row < rowSizeA; row++)
    {
        printf("Row %d : ", row + 1);
        for (col = 0; col < colSizeA; col++)
        {
            scanf("%d", &matrixA[row][col]);
        }
    }

    // taking input for elements of Matrix B
    printf(" Enter the row and column size of the matrix B ");
    scanf("%d%d", &rowSizeB, &colSizeB);
    int matrixB[rowSizeB][colSizeB];
    printf("Enter elements of Matrix B \n");
    for (row = 0; row < rowSizeB; row++)
    {
        printf("Row %d : ", row + 1);
        for (col = 0; col < colSizeB; col++)
        {
            scanf("%d", &matrixB[row][col]);
        }
    }

    // input validation
    if (colSizeA != rowSizeB)
    {
        printf(" Matrix multiplication is not possible between the inputted Matrices");
        return 0;
    }

    // logic for multiplying the matrices
    int productMatrixAB[rowSizeA][colSizeB]; // the matrix to hold the product
    for (row = 0; row < rowSizeA; row++)
    {
        for (col = 0; col < colSizeB; col++)
        {
            productMatrixAB[row][col] = 0; // setting initial value to 0
            for (int cell = 0; cell < rowSizeB; cell++)
            {
                // traverse through matrixA horizontally, thus matrixA[row][cell]
                // traverse through matrixB vertically, thus matrixB[cell][col]
                // and adding the product to the corresponding cell in productMatrix
                productMatrixAB[row][col] += matrixA[row][cell] * matrixB[cell][col];
            }
        }
    }

    // printing elements of matrix A
    printf("\n\nMatrix A\n");
    for (row = 0; row < rowSizeA; row++)
    {
        for (col = 0; col < colSizeA; col++)
        {
            printf("%d ", matrixA[row][col]);
        }
        printf("\n");
    }

    // printing elements of matrix B
    printf("\n\nMatrix B\n");
    for (row = 0; row < rowSizeB; row++)
    {
        for (col = 0; col < colSizeB; col++)
        {
            printf("%d ", matrixB[row][col]);
        }
        printf("\n");
    }

    // printing elements of matrix AB
    printf("\n\n product of Matrix A and Matrix B\n");
    for (row = 0; row < rowSizeA; row++)
    {
        for (col = 0; col < colSizeB; col++)
        {
            printf("%d ", productMatrixAB[row][col]);
        }
        printf("\n");
    }

    return 0;
}