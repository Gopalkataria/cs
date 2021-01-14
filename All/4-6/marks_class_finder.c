

// Program to  find class of students
// date : 15 oct 2020

#include <stdio.h>

int main()
{

    // variable declarations
    float mathsMarks, englishMarks, frenchMarks, physicsMarks, chemistryMarks, computerMarks;
    float percentage;

    // taking input
    printf("Enter marks for English, Hindi, Maths, Chemistry, Physics and Computer Science \n");
    scanf("%f%f%f%f%f%f", &englishMarks, &frenchMarks, &mathsMarks, &chemistryMarks, &physicsMarks, &computerMarks);

    // logic
    percentage = (englishMarks + frenchMarks + chemistryMarks + physicsMarks + mathsMarks + computerMarks) / 6;

    printf("Percentage is %4.f You have scored ", percentage);

    if (percentage > 80)
    {
        printf("distinction ");
    }
    else if (percentage >= 65)
    {
        printf("first division");
    }
    else if (percentage >= 50)
    {
        printf("second division");
    }
    else if (percentage >= 40)
    {
        printf("pass division");
    }
    else
    {
        printf(" Fail, try harder next time");
    }

    return 0;
}