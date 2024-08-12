// Pointer in function call
// Square of a number 
#include<stdio.h>
// prototype of call by value
int Square(int n);
// prototype of call by referance
int _Square(int *n);

int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    Square( num);//call by value 
    _Square(&num);//call by referance
    return 0;
}
// Definition call by value
int Square(int n){
    n=n*n;
    printf("Square of a given value using call by value: %d",n);
}
// Definition call by Referance
int _Square(int *n){
    *n=(*n) * (*n);
    printf("\nSquare of a given value using call by Referance: %d",*n);
}