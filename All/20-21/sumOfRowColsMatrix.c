
// Program to find sum of rows and columns of a  matrix
// date : 14 January 2021

#include <stdio.h>

int main()
{

    int rowSize, colSize;

    printf(" Enter the row and column size of the matrix  ");
    scanf("%d%d", &rowSize, &colSize); // taking input for the row and column size

    int matrix[rowSize][colSize], r, c, rsum, csum;

    // taking input for the matrix elements
    for (r = 0; r < rowSize; r++)
     
        for (c = 0; c < colSize; c++)
         
            scanf("%d", &matrix[r][c]);


    // finding sum of elements in a row
    for (r = 0; r < rowSize; r++)
    {
        rsum = 0;
        for (c = 0; c < colSize; c++)
        {
            rsum += matrix[r][c];
        }
        printf("Sum of row %d is %d \n", 1 + r, rsum);
    }

    // finding sum of elements in a column
    for (c = 0; c < colSize; c++)
    {
        csum = 0;
        for (r = 0; r < rowSize; r++)
        {
            csum += matrix[r][c];
        }
        printf("Sum of col %d is %d \n", 1 + c, csum);
    }

    return 0;
}