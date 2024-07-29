// print the table of a number input by user 
#include<stdio.h>
int main(){
    int num,range;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Table of your given number:\n");
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,i*num);
    }
    return 0;

}