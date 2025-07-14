// check a number is positive as well as even 
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num>0){
        if(num%2==0){
            printf("%d is positive and even ",num);
        }else{
            printf("%d is positive and  odd",num );
        }
    }else{
          if(num%2==0){
            printf("%d is Negetive and even ",num);
        }else{
            printf("%d is Negetive and odd",num );
        }
    }
    return 0;
}