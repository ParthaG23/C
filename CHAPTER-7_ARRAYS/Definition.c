/*
***Array***:
            Collection of similar data type stored at contiguous memory cocation.

***Syntax**:
            int marks [n];
            char name [n];
            float price [n];

***Input & Output :
                    #input: scanf("%d",&marks[n]);
                    #Output:printf("%d",marks[n]);

*/
// Eg-1:Store three subject marks
#include<stdio.h>
int main(){
int marks[3];
printf("Enter the marks of math:");
scanf("%d",&marks[0]);
printf("Enter the marks of Physics:");
scanf("%d",&marks[1]);
printf("Enter the marks of Chemistry:");
scanf("%d",&marks[2]);
printf("math = %d\tPhysics = %d\tChemistry:%d",marks[0],marks[1],marks[2]);


return 0;
}