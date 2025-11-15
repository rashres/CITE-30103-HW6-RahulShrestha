#include <stdio.h>

int main() {
    int num;
    int count = 0;

    // Keep asking for numbers until user enters 0
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if (num != 0) {
            count++;     // count only non-zero numbers
        }

    } while (num != 0);

    printf("You entered %d numbers.\n", count);

    return 0;
}
