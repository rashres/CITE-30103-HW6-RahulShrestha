// Purpose: Calculates area and perimeter of a rectangle
// Author: Rahul Shrestha

#include <stdio.h>

int main(void) {

    // Variable Declaration
    float length, width, area, perimeter;

    // User Input
    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the width: ");
    scanf("%f", &width);

    // Calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Output
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}

//Description:
//This program takes the length and width of a rectangle from the user and calculates both the area and perimeter. The output is displayed with two decimal places.
