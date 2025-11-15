#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 50; i++) {

        if (i == 40) {      // stop completely at 40
            break;
        }

        if (i % 5 == 0) {   // skip multiples of 5
            continue;
        }

        printf("%d ", i);
        count++;
    }

    printf("\nNumbers displayed: %d\n", count);

    return 0;
}
