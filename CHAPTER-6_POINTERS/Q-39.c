// Will address output be same?
#include<stdio.h>
void printAddress(int n);
void _printAddress(int *n);
int main (){
    int n=4;
    printf("Address of given value .....\n");
    printf("%u\n",&n);
    printf("Address Using call by value.........\n");
    printAddress(n);
    printf("Address Using call by referance......\n");
    _printAddress(&n);
    return 0;
}
// Call by value 
void printAddress(int n){ //copy n
    printf("%u\n",&n);
}
/* ****NOTE***:
                The address output not by using call by vallu.
                But when we use call by referance the address out put will be  same.
                lets a  example:
*/ 
//call by referance               
void _printAddress(int *n){
    printf("%u\n",n);
}