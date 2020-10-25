// program to exchange two variables without using a third variable
// date : 2nd oct friday

#include <stdio.h>

int main()
{

    // variable declarations
    int a, b;

    // taking input
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);

    // logic
    a = a + b;
    b = a - b;
    a = a - b;

    // printing output
    printf(" The value after exchanging of a is %d and b is %d ", a, b);
    return 0;
}