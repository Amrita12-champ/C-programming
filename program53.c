//wap to find the ascii value of a character
#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("The ascii value of %c is %d.", ch, ch);
    return 0;
}