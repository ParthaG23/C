//WAP to cheeck you can apply for votar card

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",& age);
    if(age>=18){
        printf("Congratulations!\nYou can apply for voter card..");
    }
    else{
        printf("Sorry!\nyou can not apply for votar card..\nTry next year... ");
    }
    return 0;
}