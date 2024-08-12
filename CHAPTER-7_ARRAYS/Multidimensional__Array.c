/*
#2D_Array:
***Syntax***:
            int arr[row][column];
*/
// Eg:
#include<stdio.h>
int main(){
int marks[2][3];
    //assign value 
    marks[0][0]=90;
    marks[0][1]=70;
    marks[0][2]=56;
    marks[1][0]=78;
    marks[1][1]=80;
    marks[1][2]=50;
    //Access the array value 
    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[0][2]);
    
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[1][2]);
    return 0;
}