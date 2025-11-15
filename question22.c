#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int original = num; // store original number

    while (num > 0) {
        int digit = num % 10;          // take last digit
        reversed = reversed * 10 + digit; // build reversed number
        num /= 10;                     // remove last digit
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
