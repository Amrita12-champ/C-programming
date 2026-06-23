//function and function call
#include<stdio.h>
void namaste();  //function declaration
void bonjur();

int main(){
    printf("Enter f for french & i for inidian : ");
    char ch;
    scanf("%c", &ch);
    if(ch=='i'){
        namaste();
    }else{
        bonjur(); //function  call
    } 
    return 0;
}
void namaste(){
    printf("Namaste\n"); //function defination
}
void bonjur(){
    printf("Bonjur\n");
}