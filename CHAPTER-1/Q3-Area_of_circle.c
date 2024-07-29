#include<stdio.h>
int main(){
    double redius;
    printf("Enter redius of circle:");
    scanf("%lf",&redius);
    double area = 3.14*redius*redius; //we know the area of circle = πr2 and π = 3.14
    printf("Area of circle : %.2lf",area);
    return 0;
}