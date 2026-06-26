//write a program to swap 2 number using temperary variables.
#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swaping: a=%d, b=%d\n", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("After swaping: a=%d, b=%d\n", a, b);

    return 0;

}