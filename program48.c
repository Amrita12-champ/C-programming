//Implement a program to demonstrate the use of the ternary operator. 
#include <stdio.h>

int main() {
    int number;
    char* result;
    printf("Enter an integer: ");
    scanf("%d", &number);
    result = (number % 2 == 0) ? "Even" : "Odd";
    printf("The number %d is %s.\n", number, result);

    return 0;
}