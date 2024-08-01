// use libriary function to calculate the Square of a number given by user 
/*
#include<stdio.h>
#include<math.h>

int main(){
    double num;
    printf("Enter the number :");
    scanf("%lf",&num);
    printf("Squate of your given number :%.0lf",pow(num,2));
    return 0;

}
*/
#include<stdio.h>
#include<math.h>

int main(){
    double num,range;
    printf("Enter the number :");
    scanf("%lf",&num);
     printf("Enter the range of power :");
    scanf("%lf",& range);
    for(double i=1;i<=range;i++){
        printf("%.0lf^%.0lf = %.0lf\n", num,i,pow(num,i));
    }
  
    return 0;
}