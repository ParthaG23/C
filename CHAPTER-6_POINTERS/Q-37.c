// print the value of i frome pointer to pointer
/*
    '*'--->print value
    '&'--->print Address
    
*/
#include<stdio.h>
int main(){
    int i =24;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d\n",i);
    // value of ptr pointer 
    printf("%d\n",*ptr);
    // value of _age variable
    printf("%d",**pptr);

    return 0;
}