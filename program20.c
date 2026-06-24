//factorial of n.

#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial is %d", fact(3));
return 0;
}

//recurssive function
int fact(int n){
    if(n==1){
        return 1;//basecase
    }
    int factNm1=fact(n-1); //factrial of 1 to n
    int factN=factNm1*n;
    return factN;
}