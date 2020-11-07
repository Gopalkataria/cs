// program to convert temperature from celsius to fahrenheit
// date : 2nd oct friday

#include <stdio.h>

int main()
{

    // variable declarations
    float temperatureCelsius, temperatureFahrenheit;

    // taking input
    printf("Enter the temperature in celsius  ");
    scanf("%f", &temperatureCelsius);

    // logic
    temperatureFahrenheit = (temperatureCelsius * 9 / 5) + 32;

    // printing output
    printf(" The temperature in fahrenheit is %f ", temperatureFahrenheit);
    return 0;
}