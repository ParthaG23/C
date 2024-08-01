// Find factirial of n using recursion
#include<stdio.h>
int fact( int n);
int main(){
    int n;
    printf("Enter any natural Number:");
    scanf("%d",&n);
   printf("Factorial of your given number :%d",fact(n));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}