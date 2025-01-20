/* 
Katherine McNeil
January 20,2025
Exercise 2
W0417834
*/
#include<stdio.h>

int main() {
    // Declare a float variable for the radius of the circle
    float r = 4.5;
    // Print the radius value (default floating-point format)
    printf("r is  %f  \n" , r);

    // Declare a constant double variable for Pi
    const double pi = (float) 22/7 ;
    // Print the value of Pi
    printf("pi is  %f  \n" , pi);

    // Calculate the circumference using the formula: circumference = 2 * pi * radius
    double circumference = 2 * pi * r ;
    // Print the calculated circumference with 4 decimal places
    printf("circumference is  %.4f  \n" , circumference);

    // Demonstrate type conversion: Explicitly cast circumference to an integer
    int IntCircumference2 = (int) 2 * pi * r;
    // Print the integer-converted circumference value
    printf("IntCircumference2 is  %d  \n" , IntCircumference2);

    // Declare a double variable for Planck's constant (in scientific notation)
    double PlanckConst = 6.626e-34;
    // Print Planck's constant in scientific notation using %e
    printf("PlanckConst is  %e  \n" , PlanckConst);

    return 0;
}
