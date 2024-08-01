// Write a function to convert celsius to fahreneit use recursion
#include<stdio.h>
float convert_temp(float celsius);
int main(){
    float clesius;
    printf("Enter Temprature in cilsius :");
    scanf("%f",&clesius);
    float far=convert_temp(clesius);
    printf("Temperature:%.2f F",far);

    return 0;
}
float convert_temp(float celsius){
    float far=celsius*(9.0/5.0)+32;
    return far;
}