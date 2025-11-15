#include <stdio.h>

int main() {
    int num;
    int positives = 0, negatives = 0, evens = 0, odds = 0;

    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &num);

        if (num != 0) {
            if (num > 0)
                positives++;
            else
                negatives++;

            if (num % 2 == 0)
                evens++;
            else
                odds++;
        }

    } while (num != 0);

    printf("\nPositive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Even numbers: %d\n", evens);
    printf("Odd numbers: %d\n", odds);

    return 0;
}
