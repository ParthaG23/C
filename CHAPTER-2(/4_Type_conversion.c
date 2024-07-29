#include<stdio.h>
int main(){
    // int to float
    printf("...................int to float conversion.................\n");
    int a=24;
    printf("Before type custing:\n");
    printf("a = %d",a);
    printf("\nAfter type casting:\n");
    float b= (float)a;//type custing
    printf("a= %f",b);

    // float to int
    printf("\n..................Float to int conversion................\n");
    float c=4.77777;
    printf("Before type custing:\n");
    printf("c = %f",c);
    printf("\nAfter type casting:\n");
    int d= (int)c;//type custing
    printf("c= %d",d);

    return 0;
}