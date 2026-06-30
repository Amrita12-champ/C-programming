// Implement a program to calculate simple interest.
#include <stdio.h>

int main() {
    float p,t,r,si;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter annual interest rate (as a percentage): ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
    si = (p*t*r) / 100;
    printf("The Simple Interest is: %.2f\n", si);

    return 0;
}