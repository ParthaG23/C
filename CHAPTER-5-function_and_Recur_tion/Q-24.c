// Write two function one to print "Hello" and Second to print "Good bye"
#include<stdio.h>
void print_hello();//Function prototype
void print_goodbuy();//function prototype;
int main(){

print_hello();   //Function call
print_goodbuy();//Function call
    return 0;
}
//function definition
void print_hello(){ //function definition
    printf("Hello\n");
}
//function definition
void print_goodbuy(){
    printf("Good buy");
}