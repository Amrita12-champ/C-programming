#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting them to positive
    if (number < 0) {
        number = -number;
    }

    // Loop to extract digits and calculate their sum
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit from the number
    }

    // Print the sum of the digits
    printf("Sum of the digits: %d\n", sum);

    return 0;;
}