/*
#Defination: A variable that store the memory address of another pointer 
#Syntax: int **ppter;
        float **pptr;
        char **pptr; 
*/
// Code Example :
#include<stdio.h>
int main(){
    float price=100;
    float *ptr=&price;
    float **pptr=&ptr;
    printf("%f\n",price);
    // value of ptr pointer 
    printf("%f\n",*ptr);
    // value of _age variable
    printf("%f",**pptr);
    // format specifire(print variable address)
    // Adress of age variable
    printf("\nAddress of price variable:\t%u",&price);
    // Address of *ptr variable
    printf("\nAddress of *ptr variable:\t%u",&ptr);
    //  // Address of _age variable 
    printf("\nAddress of **pptr variable:\t%u",&pptr);
    return 0;
    
}