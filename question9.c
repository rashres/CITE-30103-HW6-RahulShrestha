#include <stdio.h>

// Program to show integer vs floating-point division using implicit and explicit casting
int main(void) {
    int a = 7, b = 2;

    // Integer division (normal int division)
    int intResult = a / b;

    // Implicit casting (compiler promotes int to float)
    float implicitResult = a / b;

    // Explicit casting to force floating division
    float explicitResult = (float)a / b;

    printf("Integer division = %d\n", intResult);
    printf("Implicit casting result = %.2f\n", implicitResult);
    printf("Explicit casting result =  %.2f\n", explicitResult);

    return 0;
}
