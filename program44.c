//Implement a program to find the square of a number using an arithmetic operator.
#include <stdio.h>
int main() {
    int number;
    int square;
    printf("Enter an integer: ");
    scanf("%d", &number);

    square = number * number;
    printf("The square of %d is %d\n", number, square);
    return 0;
}