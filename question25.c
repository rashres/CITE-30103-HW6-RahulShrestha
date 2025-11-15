#include <stdio.h>

int main() {
    int L, R;

    printf("Enter L: ");
    scanf("%d", &L);

    printf("Enter R: ");
    scanf("%d", &R);

    for (int i = L; i <= R; i++) {
        printf("\nTable of %d\n", i);

        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n"); // blank line between tables
    }

    return 0;
}
