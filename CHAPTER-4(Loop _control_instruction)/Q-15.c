// WAP  print sum of first n  natural number
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum+=i;
       
    }
    printf("Sum of your given natural number: %d ",sum);
    return 0;

}