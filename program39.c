//Write a program to perform addition, subtraction, multiplication, and division and modulo of two numbers.
#include <stdio.h>
int main()  
{  
   int a,b;  
   int sum, sub, mult, mod;  
   float div;  
   printf("Enter any two numbers: ");  
   scanf("%d,%d", &a, &b);  
   sum = a+b;
   sub = a-b;
   mult = a*b;
   div = (float)a/b;  
   mod = a%b;  
   printf("The sum of the given numbers : %d\n", sum);  
   printf("The difference of the given numbers : %d\n", sub);  
   printf("The product of the given numbers : %d\n", mult);  
   printf("The division of the given numbers : %f\n", div);  
   printf("modulo of the given numbers:  %d\n", mod);  
   return 0;  
}