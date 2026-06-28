//wap to incremenincrement and decrement a number 
#include <stdio.h>

int main() {
    int number = 10; 
    printf("Original number: %d\n", number);

    // Incrementing the number
    number++; 
    printf("Number after post-increment: %d\n", number);

    ++number; 
    printf("Number after pre-increment: %d\n", number);

    // Decrementing the number
    number--; 
    printf("Number after post-decrement: %d\n", number);

    --number; 
    printf("Number after pre-decrement : %d\n", number);

    return 0;
}