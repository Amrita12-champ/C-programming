//check wheather a year is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter year to check: \n");
    scanf("%d", &year);
    if(year%4==0){
        printf("The year is a leap year. ");
    }
    else{
        printf("The entered year is not leap year.");
    }
}