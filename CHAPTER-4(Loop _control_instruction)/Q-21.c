//print the factorial of a number 
#include<stdio.h>
int main(){
    int i,num,fact = 1;
    printf("Enter a any number :");
    scanf("%d",&num);
    if(num>0){
        for(i=1;i<=num;i++){
            fact*=i;
        }
        printf("Factorial of  %d! = %d",num,fact);
    }
    return 0;
}