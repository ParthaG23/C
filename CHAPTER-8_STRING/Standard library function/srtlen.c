// Standerd library <string.h>
// strlen(str): count number of charecters Excluding '\0'
#include<stdio.h>
#include<string.h>

int main(){
    char name[]="PARTHA";
    int length=strlen(name);
    printf("Length is :%d",length);
    return 0;


}