#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using nested conditional operator
    (num > 0) ? printf("Positive\n") :
    (num < 0) ? printf("Negative\n") :
                printf("Zero\n");

    return 0;
}
