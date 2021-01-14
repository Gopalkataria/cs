// Program to  find simple interest given rate, principal and time
// date : 7 oct wed

#include <stdio.h>

int main()
{

    // variable declarations
    float principal,
        rate,
        time,
        simpleInterest;

    // taking input
    printf("Enter the following information \n ");
    printf(" Principal (in Rs) ");
    scanf("%f", &principal);
    printf(" Rate of intereset (in percent) ");
    scanf("%f", &rate);
    printf(" Time (in years) ");
    scanf("%f", &time);

    // logic
    simpleInterest = (principal * time * rate) / 100;

    // printing output
    printf("\n The simple interest is %f ", simpleInterest);
    return 0;
}