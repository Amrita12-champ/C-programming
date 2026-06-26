//swap two numbers without using a temperary variables(use arithmatic operotor)
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swaping: a=%d, b=%d\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping: a=%d, b=%d\n", a, b);

    return 0;

}