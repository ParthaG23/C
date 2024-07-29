#include<stdio.h>
int main(){
    double first_number,second_number;
    printf("Enter your first number:");
    scanf("%lf",&first_number);
    printf("\nEnter your second number:");
    scanf("%lf",&second_number);
    double sum = first_number+second_number;
    printf("\nSum of your given Number :\n%.1lf + %.1lf = %.1lf",first_number,second_number,sum);

    return 0;
}