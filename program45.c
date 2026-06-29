//Write a program to check if a number is positive, negative, or zero. 
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer number: ");
    scanf("%d", &num);
    if(num>0){
        printf("The number is +ve. \n");
    }else if(num<0){
        printf("The number is -ve. \n");
    }else{
        printf("The number is 0.\n");
    }
    return 0;
}