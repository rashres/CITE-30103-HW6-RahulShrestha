//  Question 7 - Circle Calculations

#include <stdio.h>

#define PI_DEFINE 3.14159   // Using #define

int main() {

    const float PI_CONST = 3.14159;   // Using const

    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculations
    area = PI_DEFINE * radius * radius;
    circumference = 2 * PI_CONST * radius;

    // Output rounded to 2 decimals
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
