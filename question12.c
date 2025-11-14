#include <stdio.h>

int main(void) {
    int a = 5, b = 3, res;

    // Fix #1 (parentheses)
    res = a + (b << 1);
    printf("Fix #1 result: %d\n", res);

    // Fix #2 (arithmetic)
    res = a + b * 2;
    printf("Fix #2 result: %d\n", res);

    return 0;
}
