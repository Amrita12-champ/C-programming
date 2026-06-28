#include <stdio.h>

int main() {
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    printf("The number with two decimal places is: %.2f\n", number);

    return 0;
}