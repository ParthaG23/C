#include<stdio.h>
int main(){
    float side;
    printf("Enter side of a Square:");
    scanf("%f",& side);
    float area = side*side; //We know area of square = side*side
    printf("Area of Square :\n  %.1f *%.1f = %.1f",side,side,area);
    return 0;

}