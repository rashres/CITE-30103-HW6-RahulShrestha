#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 2 == 0) && (num % 3 == 0) && !(num % 7 == 0)) {
        printf("%d is divisible by 2 and 3 but NOT by 7.\n", num);
    } else {
        printf("%d does NOT meet the condition.\n", num);
    }

    return 0;
}
