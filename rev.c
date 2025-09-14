#include <stdio.h>

void  reverse() {
    int num, reversedNum = 0, remainder;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later display
    int originalNum = num; 

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;                     // Remove the last digit from the original number
    }

    // Print the original and reversed numbers
    printf("Original number: %d\n", originalNum);
    printf("Reversed number: %d\n", reversedNum);

//    return 0;
}
