// Write a function to print n term of the fibonacci Sequence
#include<stdio.h>
int fib(int n);
int main (){
	int n;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
    printf("..............fibonacci Sequence.................\n");
    for(int i=0;i<n;i++){
        printf("%d\t",fib(i));
    }
	
	return 0;
}
int fib(int n){
	if (n==0){
		return 0 ;
	}else if(n==1){
		return 1;
	}
    else{
	int fibNm1=fib(n-1);
	int fibNm2=fib(n-2);
	int fibN =fibNm1+fibNm2;
	return fibN;
    }
}