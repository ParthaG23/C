/*Q-40:Write a function to calculate sum , product, Avarage , of two number print the that Avarage inthe main
      function. 

      ****NOTE***:
                 main() function only given one value but when we  required many 
                 value then use pointer in main() function.
*/
#include<stdio.h>
// function prototype
void operation(int a,int b, int *sum,int *product,float *avg);
int main(){
    int a,b,sum,product;
    float avg;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("Enter any number :");
    scanf("%d",&b);
    // function call
    operation(a,b,&sum,&product,&avg);
    printf("Your given number ....\na=%d\tb=%d\n",a,b);
    printf("Parformed Operation..............\n");
    printf("Sum=%d\tproduct=%d\tAvarege=%.2f",sum,product,avg);
    return 0;
}
// function definition
void operation(int a,int b, int *sum,int *product,float *avg){
    *sum=a+b;
    *product=a*b;
    *avg=(float)(a+b)/2;
}