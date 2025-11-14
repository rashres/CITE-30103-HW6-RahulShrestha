// Question 8: Demonstrating Global and Local Scope
// Global variable declared outside main()

#include <stdio.h>

int globalVar = 20;   // global variable

int main(void) {

    int localVar = 5; // local variable

    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);

    return 0;
}
