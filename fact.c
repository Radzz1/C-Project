#include <stdio.h>

int factorial() {
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long for larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d is %llu\n", n, factorial);
    }

//    return 0;
}
