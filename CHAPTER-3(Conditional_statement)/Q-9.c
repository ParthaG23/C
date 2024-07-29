// WAP to check if a student pass or fail if mark>40 pass other than fail
#include<stdio.h>
int main(){
    int num;
    printf("Enter marks(0-100):");
    scanf("%d",&num);
    if(num<=30){
        printf("Sorry!\nYou are FAIL");
    }else{
        printf("Congratulations!\nYou are PASS");
    }
    return 0;
}