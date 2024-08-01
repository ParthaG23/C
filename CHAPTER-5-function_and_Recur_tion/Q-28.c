// Calculate price with 18% gst use to function
#include<stdio.h>
void calculate_price(float price);

int main(){
float price;
printf("Enter product price:");
scanf("%f",&price);
calculate_price(price);
return 0;
}
void calculate_price(float price){
    price = price + (0.18*price);
    printf("Final product price with gast:%f",price);
}