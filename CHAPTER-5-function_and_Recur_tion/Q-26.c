// sum of two number use to function
#include<stdio.h>
int sum(int x, int y);
int main(){
    int num1,num2;
    printf("Enter your first number :");
    scanf("%d",&num1);
    printf("Enter your second number :");
    scanf("%d",&num2);
    int s=sum(num1,num2);//num1 & num2 are argument
    printf("Sum of your given number :%d",s);
    return 0;

}
int sum(int x,int y){//x & Y are parameter
    return x+y;
}