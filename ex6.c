#include <stdio.h>
int main(){
    int num, reversed_num=0, remainder, org_num;
    printf("enter an integer to check: ");
    scanf("%d", &num);
    org_num=num;
    while(num!=0){
        remainder=num%10;
        reversed_num=reversed_num*10+remainder;
        num=num/10;
    }
    if(org_num==reversed_num){
        printf("The number is pallindrome.\n");
    }else{
        printf("The number is not pallindrome.\n");
    }
    return 0;
}