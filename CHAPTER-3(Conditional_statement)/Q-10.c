//WAP to given greade to student use if else
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks<40){
        printf("F\nSorry! you are FAIL\n");
    }else if(marks>=40 && marks<50){
       printf("P\nCongratulations!\nYou are PASS\n"); 
    }else if(marks>=50 && marks<60){
         printf("B\nCongratulations!\nYou are PASS\n"); 
    }else if(marks>=60 && marks<70){
         printf("B+\nCongratulations!\nYou are PASS\n"); 
    }else if(marks>=70 && marks<80){
         printf("A\nCongratulations!\nYou are PASS\n"); 
    }else if(marks>=80 && marks<90){
         printf("A+\nCongratulations!\nYou are PASS\n"); 
    }else if(marks>=90 && marks<=100){
         printf("O \nCongratulations!\nYou are PASS\n"); 
    }
    else{
        printf("Enter valid marks.....(0 to 100)");
    }
    return 0;
}