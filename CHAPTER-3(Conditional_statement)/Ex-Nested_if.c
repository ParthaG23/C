// WAP to cheeck if a number is positive as well as even or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num>0){
        printf("Your given number %d is positive\t",num);
        if(num%2==0){
            printf("as well as  even\n",num);
        }else{
            printf("but it is odd\n",num);
        }
    }else{
        printf("Your given number %d is negetive\n ",num);
    }
    return 0;
}
