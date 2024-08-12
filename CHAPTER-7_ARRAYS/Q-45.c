// WAp to store the first n fibonachi serice

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array :");
    scanf("%d",&n);
    int  fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("Fibonacchi serice fo your given number .......\n ");
    printf("%d\t%d\t",fib[0],fib[1]);
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}
