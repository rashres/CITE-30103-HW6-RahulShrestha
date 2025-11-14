//  Question 5 - Fix scanf bug

#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");

    /* Bug fix: scanf needs the address of n */
    scanf("%d", &n);

    printf("You entered %d\n", n);

    return 0;
}
