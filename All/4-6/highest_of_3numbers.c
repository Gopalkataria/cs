// Program to  find highest of three given numbers
// date : 15 oct 2020
#include <stdio.h>

int main()
{

    int a, b, c, highest;

    // taking input
    printf("1st no ");
    scanf("%d", &a);
    printf("2nd no ");
    scanf("%d", &b);
    printf("3rd no ");
    scanf("%d", &c);

    highest = a;

    if (b > highest)
        highest = b;
    if (c > highest)
        highest = c;

    printf("\n%d\n", highest);
    return 0;
}