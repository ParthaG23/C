// check given age is adult or not
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18){
        printf("adult\n");
    }else{
        printf("Not adult");
    }
    return 0;
}