#include<stdio.h>
int main(){
    // Eg-1
    int age =22;
    int *ptr = & age;
    int _age = *ptr;
    // format specfier(Print variable value)
    // value of age variable
    printf("%d\n",age);
    // value of ptr pointer 
    printf("%d\n",*ptr);
    // value of _age variable
    printf("%d",*(& _age));
    // format specifire(print variable address)
    // Adress of age variable
    printf("\nAddress of age variable:\t%u",&age);
    // Address of *ptr variable
    printf("\nAddress of *ptr variable:\t%u",&ptr);
    // Address of _age variable 
    printf("\nAddress of _age variable:\t%u",&_age);
    return 0;
}