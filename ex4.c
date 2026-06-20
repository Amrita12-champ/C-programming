#include<stdio.h>
int main(){
    int i, n, t1=0, t2=1, nextTerm;
    printf("Enter the number of Terms: ");
    scanf("%d\n", &n);
    if(n<=0){
        printf("Enter a positibe number.\n");
    }else if(n==1){
        printf("%d\n", t1);
    }else{
        printf("%d, %d", t1, t2);
        for(int i=3; i<=n; ++i){
            nextTerm=t1+t2;
            printf(" , %d\n", nextTerm);
            t1=t2;
            t2=nextTerm;
        }
        printf("\n");
    }
    return 0;
}