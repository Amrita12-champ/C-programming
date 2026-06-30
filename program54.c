//program to calculate square root of a number.
#include<stdio.h>
#include<math.h>
int main(){
    double num, sr;
    printf("Enter number: ");
    scanf("%lf", &num);
    sr=sqrt(num);
    printf("The squareroot of %.2lf is %.2lf\n ", num, sr);



    return 0;

}