//Implement a program to calculate the sum and average of three numbers.
#include <stdio.h>

int main() {
    int a,b,c;
    int sum;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a+b+c;
    average = (float)sum / 3;
    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}