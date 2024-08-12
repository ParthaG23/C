// Swap two number  a and b

// Call by value 
#include <stdio.h>
void swap(int a ,int b);
int main(){
    int x=2, y=5;
    printf("Before swap\n");
    printf("x= %d and x = %d\n",x,y);
    printf("after swap\n");
    swap(x,y);
    printf("a = %d and b = %d\n",x,y); // ****** Not Swap the value of x and y
    return 0;
}
void swap(int a,int b){
    int c=b;
        b=a;
        a=c;
       //printf("a = %d and b = %d\n",a,b);
}
// ***NOTE**:   Swap is not possible by using call by value  method 



// Call by referance

#include <stdio.h>
void _swap(int *a ,int *b);
 int main(){
    int x=2, y=5;
    printf("Before swap\n");
    printf("x= %d and x = %d\n",x,y);
    printf("after swap\n");
    _swap(&x,&y);
    printf("a= %d and b = %d\n",x,y); //....*****Swap the value of x and y
     return 0;
}
void _swap(int *a,int *b){
    int   c=*b;
         *b=*a;
         *a=c;
}     
// ***NOTE**:   Swap is possible by using call by referance method 