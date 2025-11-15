#include <stdio.h>

int main(void) {
    char op;
    float a, b, result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (b == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result: %.2f\n", result);
            }
            break;

        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}
