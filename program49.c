// Write a program to convert kilometers to miles. 
#include <stdio.h>
int main() {
	float km, miles;
	printf(" enter kilometers:");
	scanf("%f", &km);
    miles = km / 1.6;
	printf("%f Miles", miles);
}