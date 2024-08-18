// Create a string firstName and secondName to store details of user & print all the charecter using loop
#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstName[]="PARTHA";
    char lastName[]="GAYEN";

    // call the function
    printString(firstName);
    printString(lastName);


}
void printString(char arr[]){
    for ( int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}