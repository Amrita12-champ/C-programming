#include <stdio.h>

int main() {
    int number = 10; // Initialize an integer variable

    printf("Original number: %d\n", number);

    // Increment operations
    number++; // Post-increment: uses current value, then increments
    printf("After post-increment %d is : %d\n",number, number);

    ++number; // Pre-increment: increments, then uses new value
    printf("After pre-increment %d is : %d\n",number, number);

    // Decrement operations
    number--; // Post-decrement: uses current value, then decrements
    printf("After post-decrement %d is : %d\n", number, number);

    --number; // Pre-decrement: decrements, then uses new value
    printf("After pre-decrement &d is: %d\n", number, number);
    return 0;
}
