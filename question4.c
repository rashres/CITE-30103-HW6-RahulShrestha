//  Question 4 - Correct Average

#include <stdio.h>

int main(void) {
    int a = 5, b = 10;

    /* Bug fix: Use 2.0 instead of 2 to avoid integer division */
    float avg = (a + b) / 2.0;

    printf("Average = %.2f\n", avg);

    return 0;
}


