//print sum of n natoral umber 
#include<stdio.h>
int main(){
	int i,num;
	printf("Enter a number:");
	scanf("%d",&num);
	int sum=0;
	for(i=1;i<=num;i++){
		sum+=i;
	}
		printf("%d\t",sum); 
	return 0;
}
