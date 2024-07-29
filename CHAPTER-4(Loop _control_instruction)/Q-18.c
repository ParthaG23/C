// Keep taking number as input from user until user enter a number which is multiple of 7
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter any number:");
        scanf("%d",&num);
        printf("your entered number = %d\n",num);
        if(num%7==0){//multiple of 7
            break;
        }
    }while(1);
    printf("Thank you");
    return 0;
}