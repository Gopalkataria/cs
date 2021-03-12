// Program to  find su of even numbers until n
// date : 4 december 2020

#include <stdio.h>

int main()
{

    // variable declarations
    int monthNo;

    // taking input
    printf("Enter the month no. \n\n     January    : 1 \n     February   : 2 \n     March      : 3 \n     April      : 4 \n     May        : 5 \n     June       : 6 \n     July       : 7 \n     August     : 8 \n     September  : 9 \n     October    : 10 \n     November   : 11 \n     December   : 12 \n     \n Your choice ");
    scanf("%d", &monthNo);

    // logic
    switch (monthNo)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("   31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("   30 days");
        break;

    case 2:
        printf("   28 or 29 days");
        break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}