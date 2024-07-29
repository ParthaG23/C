// Keep taking number as input from user until user enter an odd number
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter any number:");
        scanf("%d",&num);
        printf("your entered number = %d\n",num);
        if(num%2!=0){
            break;
        }
    }while(1);
    printf("Thank you");
    return 0;
}