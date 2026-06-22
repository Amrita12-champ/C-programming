//prin t no. from 0 to n, if n given by user
#include<stdio.h>
int main(){
   int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int i=0;
    while(i<=n){ //while loop
        printf("%d\n", i);
        i++;
    }
    return 0;
}