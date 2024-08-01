// Write a program to calculate parcentage of student marks for 5 subject:
#include<stdio.h>
float calculateParcentage(float b, float e ,float m, float p, float c);
int main(){
    float b,e,m,p,c;
    printf("Enter the number in Bengali:");
    scanf("%f",&b);
    printf("Enter the number in English:");
    scanf("%f",&e);
     printf("Enter the number in Math:");
    scanf("%f",&m);
     printf("Enter the number in Physics:");
    scanf("%f",&p);
     printf("Enter the number in Chemistry:");
    scanf("%f",&c);
    printf("Your total marks: %.2f parcent",calculateParcentage(b,e,m,p,c));

    return 0;
}
float calculateParcentage(float b, float e ,float m, float p, float c){
    float parcentage =((b+e+m+p+c)/5);
    return parcentage;
}