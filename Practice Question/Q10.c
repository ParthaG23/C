// write a program to grades to students
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=0){
         if(marks>=0 && marks<30){
        printf("grades:C");
        }else if(marks<=30 && marks<70){
        printf("grades:B");
        }else if(marks<=70 && marks<90){
        printf("grades:A");
        }else if(marks<=90 && marks<=100){
        printf("grades:A+");
        }else{
        printf("You entered Invalid marks");
        }
    }else{
        printf("Your marks are Negetive. Try again\n");
    }
  
    return 0;
}