// Write a function to calculate area of a square ,circle & rectangle
#include<stdio.h>
#include<math.h>

void area_of_sueare();
void area_of_circle();
void area_of_rectangle();
int main(){
    int num;
    printf("Hey Which AREA you are calculate?\n1.Square\n2.Circle\n3.Rectangle\n.........................\nChoose any given option:\n");
    scanf("%d",&num);
    switch(num){
        case 1: area_of_sueare();
        break;
        case 2: area_of_circle();
        break;
        case 3:area_of_rectangle();
        break;
        default:printf("Enter valid choos !");
    }
    return 0;
}
void area_of_sueare(){
    float side;
    printf("Enter the side of the Square:");
    scanf("%f",&side);
    printf("Area of square is : %.2f",side*side);
}
void area_of_circle(){
    float redius;
    printf("Enter the redius of the circle:");
    scanf("%f",&redius);
    printf("Area of Circle is : %.2f",3.14*redius*redius);
}
void area_of_rectangle(){
    float l,w;
    printf("Enter length:");
    scanf("%f",&l);
    printf("Enter Width:");
    scanf("%f",&w);
    printf("Area of rectangle : %.2f",l*w);
}